#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//直接将所用头文件全放入头文件game.h
// 后面就只需引用game.h
//测试三子棋
void menu()
{
	printf("***********************\n");
	printf("*****1.play 0.exit*****\n");
	printf("***********************\n");
}
//心目中棋盘
//    |   |    
// ---|---|---
//    |   |    
// ---|---|---
//    |   |   
//对游戏的实现
void game()
{
	char ret = 0;
	//创建数组--存放玩家和电脑走出的信息
	char board[Row][Col]={0};//全部是空格
	//最好还是初始化一下
	// 虽然0是不可打印的；
	//对棋盘进行初始化（全是空格）
	//在头文件中进行定义
	InitBoard(board,Row,Col);
	//对棋盘打印
	DisplayBoard(board,Row,Col);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//判断输赢
		ret = IsWin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, Row, Col);
		DisplayBoard(board, Row, Col);
		//判断电脑是否赢
		ret = IsWin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢。\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢。\n");
	}
	else
	{
		printf("平局。\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int )time(NULL));
	do
	{
		menu();
		printf("请选择(0/1):>");
		scanf("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择：\n");
			break;
		}
	} while (input == 1);
}
int main()
{
	test();
	return 0;
}