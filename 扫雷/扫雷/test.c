#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("***********************\n");
	printf("*****1.play 0.exit*****\n");
	printf("***********************\n");
}
void game()
{
	printf("扫雷\n");
	//雷的信息存储
	//1.布置好的雷的信息；
	char mine[ROWS][COLS] = { 0 };//11*11的数组
	//2.排查出的雷的信息；
	char show[ROWS][COLS] = { 0 };
	//对数组进行初始化
	Initboard(mine,ROWS,COLS,'0');
	Initboard(show, ROWS, COLS, '*');
	//打印棋盘(不用打印外围一圈)
	//Displayboard(mine, ROW, COL);
	//传输是还是应该根据数组原来表现确定
	//但只需操作ROW,COL也就是9*9
	Displayboard(show, ROW, COL);
	//布置雷
	Setmine(mine, ROW, COL);//随机找坐标放一
	//扫雷
	Findmine(mine,show, ROW, COL);
	//Displayboard(mine, ROW, COL);
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	 do
	 {
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		system("cls");
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("非法输入,请重新选择:>\n");
			break;
		}
	 } while (input);
}
int main()
{
	test();
	return 0;
}