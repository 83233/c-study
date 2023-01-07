#pragma once
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#define Row 3
#define Col 3
//在此声明（在game.c中实现）
void InitBoard(char board[Row][Col], int row, int col);
void PlayerMove(char board[Row][Col], int row, int col);
void DisplayBoard(char board[Row][Col], int row, int col);
void ComputerMove(char board[Row][Col], int row, int col);
//告诉我们四个状态：
//电脑赢 -‘*’
//玩家赢 -‘#’
//平局 -‘Q’
//继续 - ‘C’
char IsWin(char board[Row][Col], int row, int col);
//返回1表示棋盘满了 
//返回0表示棋盘没满
int IsFull(char board[Row][Col], int row, int col);
