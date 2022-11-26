#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
#include<stdio.h>
#include<stdlib.h>

//��ʼ������
void Initboard(char board[ROW][COL], int row, int col) {
	
	int i = 0, j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++) {
			board[i][j] = ' ';
		}
	}
}
//��ӡ����
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
//�������
void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	printf("���������\n");
	printf("�������������\n");
	while (1)
	{
		scanf("%d%d", &x,&y);
		if ((x <= row && x > 0) && (y <= col && y > 0)) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';

				break;
			}
			else {
				printf("��λ���Ѿ������ӣ����������壡��\n");
			}
		}
		else {
			printf("�������������������������꣡����\n");
		}
		
	}
	
}
//��������
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
	
	printf("��������\n");

}
//����1��ʾ�������ˣ�����0��ʾ����û��
int IsFull(char board[ROW][COL], int row, int col) {
	int i = 0, j = 0;
	for ( i = 0; i < row; i++)
	{
		for(j=0;j<col;j++){
			if (board[i][j] == ' ')
				return 0;//û��
		}
	}
	return 1;//����
}

//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col) {
	int i = 0;
	//������
	for ( i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][2] == board[i][1] && board[i][1] != ' ') {
			return board[i][1];
		}
	}
	//������
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[i][1] != ' ') {
			return board[1][i];
		}
	}
	//�����Խ���
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[1][1] != ' ') {
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[0][2] == board[1][1] && board[1][1] != ' ') {
		return board[1][1];
	}
	//�ж��Ƿ�ƽ��
	if (1 == IsFull(board, ROW, COL)) {
		return 'Q';
	}
	return 'C';
}