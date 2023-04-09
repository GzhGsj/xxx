#define _CRT_SECURE_NO_WARNINGS 
//属于贵子豪的专属
#include "game.h"
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |     要打印的棋盘
void game() {  //实现游戏的方法
	char board[ROW][COL] = { 0 };//用数组存储棋盘
	Initboard(board, ROW, COL);//初始化棋盘 在game.h里声明,在game.c里实现
	Displayboard(board, ROW, COL);//打印棋盘
	while (1) {
		int ret = 0;
		Gamerplay(board, ROW, COL);//玩家下棋
		Displayboard(board, ROW, COL);
		ret=isWin(board,ROW,COL);
		if (ret != 'C') {
			if (ret == '*') {
				printf("玩家赢\n");
				break;
			}
			else if(ret=='P') {
				printf("平局\n");
				break;
			}
		}
		Complay(board, ROW, COL);//电脑下棋
		Displayboard(board, ROW, COL);
		ret =isWin(board,ROW,COL);
		if (ret != 'C') {
			if (ret == '$') {
				printf("电脑赢\n");
				break;
			}
			else if (ret == 'P') {
				printf("平局\n");
				break;
			}
		}
	}
}
void begin() {
	printf("                                         \n");
	printf("       1.play         0.exit             \n");
	printf("                                         \n");
}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		begin();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("重新选择.\n");
			break;
		}
	}while(input);
	return 0;
}