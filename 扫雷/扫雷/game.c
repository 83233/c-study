#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void Initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf(" %d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
}
//Ŀǰȱ�ݣ��޷�ʵ��һƬȫ������
//�õ��ݹ�
//1.���겻����
//2.��������Χû���ף������ױ�ֹͣ��
//3.��show�ô���Ϊ�ո�
//4.������Χ�˸���ֱ���
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)//count���������һֱ������
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//��ACSCII����
//'3' - '0' = 3
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	int win = 0;
	while (row*col-EASY_COUNT)
	{
		printf("�������Ų��׵�����");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//1.����
			if (mine[x][y] == '1')
			{
				printf("���ź�,�㱻ը����\n");
				Displayboard(mine, row, col);
				break;
			}
			//2.������
			else
			{
				//����x��y������Χ�м�����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				Displayboard(show, row, col);
				win++;
			}

		}
		else
			printf("��������Ƿ�������������\n");
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("���׳ɹ�\n");
		Displayboard(mine, row, col);
	}
}
//Ŀǰȱ�ݣ��޷�ʵ��һƬȫ������
//�õ��ݹ�
//1.���겻����
//2.��������Χû���ף������ױ�ֹͣ��
//3.��show�ô���Ϊ�ո�
//4.������Χ�˸���ֱ���
