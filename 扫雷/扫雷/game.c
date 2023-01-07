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
	//打印列号
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
//目前缺陷：无法实现一片全部出来
//用到递归
//1.坐标不是雷
//2.该坐标周围没有雷（出现雷便停止）
//3.将show该处改为空格
//4.再在周围八个点分别检测
void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)//count不等于零就一直布置雷
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
//在ACSCII码中
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
		printf("请输入排查雷的坐标");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//1.踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾,你被炸死了\n");
				Displayboard(mine, row, col);
				break;
			}
			//2.不是雷
			else
			{
				//计算x，y坐标周围有几个雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				Displayboard(show, row, col);
				win++;
			}

		}
		else
			printf("输入坐标非法，请重新输入\n");
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("排雷成功\n");
		Displayboard(mine, row, col);
	}
}
//目前缺陷：无法实现一片全部出来
//用到递归
//1.坐标不是雷
//2.该坐标周围没有雷（出现雷便停止）
//3.将show该处改为空格
//4.再在周围八个点分别检测
