#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����ģ��
#include<stdio.h>
#include<stdlib.h>
#include "game.h"
//������������Ϸ

void menu() {
	printf("*************************************\n");
	printf("**********1.play   |    0.exit*******\n");
	printf("*************************************\n");
}



void game() {
	char board[ROW][COL] = { 0 };
	char ret = 0;
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("���Ӯ");
	}
	else if (ret == '#') {
		printf("����Ӯ");
	}
	else if(ret=='Q') {
		printf("ƽ��");
	}
}



void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
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
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}