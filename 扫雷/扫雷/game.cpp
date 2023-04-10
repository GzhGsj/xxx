#define _CRT_SECURE_NO_WARNINGS 
//属于贵子豪的专属
#include"game.h"
void Initboard(char board[ROWS][COLS],int rows,int cols,char set){
int i = 0;
int j = 0;
for(i = 0; i <rows;i++) {
	for (j = 0; j <cols;j++) {
		board[i][j] = set;
	}
}
}
void Display(char board[ROWS][COLS], int row, int col) {
	printf("-------------扫雷----------\n");
	for (int i = 0; i <= col; i++) {
		if (i == 0) {
			printf("  ");
		}
		else {
			printf("%d ", i);
		}
	}
	printf("\n");
	for (int i = 1; i <= row; i++){
		printf("%d ", i);
		for (int j =1; j<= col; j++){
				printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------------扫雷-----------\n");
}
void Setmine(char board[ROWS][COLS], int row, int col) {
	int count = LEI;
	while (count) {
		int x = rand() % row + 1;//生成随机下标
		int y = rand() % col + 1;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			count--;
		}
	}
}
int get_something(char board[ROWS][COLS], int x, int y) {
	int count = 0;
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
			if (board[x + i][y + j] == '#') {
				count++;
			}
		}
	}
	return count;
}
void Findmine(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	//1.输入坐标找
	//2.判断坐标上是不是雷
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-LEI) {
		printf("输入排查的坐标\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x][y] == '#') {
				printf("你被炸死了，游戏结束\n");
				Display(board,row,col);
				break;
			}
			else {
				int ret=get_something(board,x,y);
				show[x][y] = ret + '0';
				win++;
				Display(show, row, col);
			}
		}
		else {
			printf("输入的坐标错误\n");
		}
	}
	if (win == row * col - LEI) {
		printf("                     恭喜你成为扫雷英雄              .\n");
		Display(show, row, col);
	}
}