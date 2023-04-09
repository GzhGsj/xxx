#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"
//属于贵子豪的专属
void Initboard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
		printf("\n");
	}
}
void Displayboard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j <col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i<row-1) {
			for (int j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
		}
		printf("\n");
	}
}
void Gamerplay(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	while (1) {
		printf("请输入你要下的坐标\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= col && y >= 1 && y <= row) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("该坐标被占用\n");
			}
		}
		else {
			printf("输入的坐标非法，请重新输入\n");
		}
	}
}
void Complay(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("电脑下棋\n");
	while(1){
	x = rand() % row;
	y = rand() % col;
			if(board[x][y] == ' ') {
				board[x][y] = '$';
				break;
			}
		}
	}
int isFull(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	 }
	return 1;
}
char isWin(char board[ROW][COL],int row,int col) {
	int i = 0;
	for (i = 0; i < row; i++) {//横三胜
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
			break;
		}
	}
	for (i = 0; i < col; i++) {//竖三胜
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
			break;
		}
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}
	if (board[2][2] == board[1][1] && board[2][2] == board[2][0] && board[2][2] != ' ') {
		return board[2][2];
	}
	if (isFull(board,ROW,COL) == 1) {
		return 'P';
	}
	else {
		return'C';
	}
}