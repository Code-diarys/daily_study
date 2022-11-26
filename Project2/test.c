#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//测试模块
#include<stdio.h>
#include<stdlib.h>
#include "game.h"
//测试三子棋游戏

void menu() {
	printf("*************************************\n");
	printf("**********1.play   |    0.exit*******\n");
	printf("*************************************\n");
}



void game() {
	char board[ROW][COL] = { 0 };
	char ret = 0;
	//初始化数组
	Initboard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("玩家赢");
	}
	else if (ret == '#') {
		printf("电脑赢");
	}
	else if(ret=='Q') {
		printf("平局");
	}
}



void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
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
			printf("选择错误请重新选择");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}