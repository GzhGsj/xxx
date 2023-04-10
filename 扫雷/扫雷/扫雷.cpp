#define _CRT_SECURE_NO_WARNINGS 
//属于贵子豪的专属
#include "game.h"
void test() {
	printf("                                         ");
	printf("        1.开始游戏       0.退出游戏      ");
	printf("                                         ");
}
void game() {
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	srand((unsigned int)time(NULL));
	//初始化数组
	Initboard(mine,ROWS,COLS,' ');
	Initboard(show,ROWS,COLS,'*');
	Display(show, ROW, COL);//打印棋盘
	//布置雷
	Setmine(mine,ROW,COL);
	//Display(mine, ROW, COL);
	//排查雷
	Findmine(mine,show,ROW,COL);
}
int main() {
	int input = 0;
	do {
		test();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
			break;
		default:
			printf("您输入的不正确，请重新输入。");
			break;
		}
	} while(input);
	return 0;
}
