#pragma once
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#define Row 3
#define Col 3
//�ڴ���������game.c��ʵ�֣�
void InitBoard(char board[Row][Col], int row, int col);
void PlayerMove(char board[Row][Col], int row, int col);
void DisplayBoard(char board[Row][Col], int row, int col);
void ComputerMove(char board[Row][Col], int row, int col);
//���������ĸ�״̬��
//����Ӯ -��*��
//���Ӯ -��#��
//ƽ�� -��Q��
//���� - ��C��
char IsWin(char board[Row][Col], int row, int col);
//����1��ʾ�������� 
//����0��ʾ����û��
int IsFull(char board[Row][Col], int row, int col);
