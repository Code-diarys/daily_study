#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include<stdio.h>
#include<stdlib.h>

//初始化数组
void Initboard(char board[ROW][COL], int row, int col) {
	
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++) {
			board[i][j] = ' ';
		}
	}
}
//打印数组
void DisplayBoard(char board[ROW][COL], int row, int col) {
	int i = 0;

	for ( i = 0; i < ROW; i++)
	{
		int j = 0;
		while (j < COL) {
			
			printf(" %c ", board[i][j]);
			if (j != COL-1)
				printf("|");
			j++;
		}
		printf("\n");

		if(i<ROW-1){
			for (int o = 0; o < ROW; o++) {
				printf("---");
				if (o < ROW - 1)
					printf("|");
			}
			printf("\n"); 
		}
		
	}

}
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	printf("请玩家下棋\n");
	printf("请玩家输入坐标\n");
	while (1)
	{
		scanf("%d%d", &x,&y);
		if ((x <= row && x > 0) && (y <= col && y > 0)) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';

				break;
			}
			else {
				printf("该位置已经有棋子，请重新下棋！！\n");
			}
		}
		else {
			printf("输入坐标有误，请重新输入坐标！！！\n");
		}
		
	}
	
}
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
		
	}
	
	printf("电脑下棋\n");

}
//返回1表示棋盘满了，返回0表示棋盘没满
int IsFull(char board[ROW][COL], int row, int col) {
	int i = 0, j = 0;
	for ( i = 0; i < row; i++)
	{
		for(j=0;j<col;j++){
			if (board[i][j] == ' ')
				return 0;//没满
		}
	}
	return 1;//满了
}

//判断输赢
char IsWin(char board[ROW][COL], int row, int col) {
	int i = 0;
	//横三行
	for ( i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][2] == board[i][1] && board[i][1] != ' ') {
			return board[i][1];
		}
	}
	//竖三行
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[i][1] != ' ') {
			return board[1][i];
		}
	}
	//两个对角线
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[1][1] != ' ') {
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[0][2] == board[1][1] && board[1][1] != ' ') {
		return board[1][1];
	}
	//判断是否平局
	if (1 == IsFull(board, ROW, COL)) {
		return 'Q';
	}
	return 'C';
}