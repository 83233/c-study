#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//ֱ�ӽ�����ͷ�ļ�ȫ����ͷ�ļ�game.h
// �����ֻ������game.h
//����������
void menu()
{
	printf("***********************\n");
	printf("*****1.play 0.exit*****\n");
	printf("***********************\n");
}
//��Ŀ������
//    |   |    
// ---|---|---
//    |   |    
// ---|---|---
//    |   |   
//����Ϸ��ʵ��
void game()
{
	char ret = 0;
	//��������--�����Һ͵����߳�����Ϣ
	char board[Row][Col]={0};//ȫ���ǿո�
	//��û��ǳ�ʼ��һ��
	// ��Ȼ0�ǲ��ɴ�ӡ�ģ�
	//�����̽��г�ʼ����ȫ�ǿո�
	//��ͷ�ļ��н��ж���
	InitBoard(board,Row,Col);
	//�����̴�ӡ
	DisplayBoard(board,Row,Col);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//�ж���Ӯ
		ret = IsWin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//�жϵ����Ƿ�Ӯ
		ret = IsWin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ�֡�\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int )time(NULL));
	do
	{
		menu();
		printf("��ѡ��(0/1):>");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input == 1);
}
int main()
{
	test();
	return 0;
}