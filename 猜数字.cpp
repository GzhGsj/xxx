#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//猜数字游戏
void page() {
	printf("                                             \n");
	Sleep(1000);
	printf("                  #猜数字#                   \n");
	Sleep(1000);
	printf("                 1.开始游戏                  \n");
	Sleep(1000);
	printf("                 0.退出游戏                  \n");
	Sleep(1000);
	printf("                                             \n");
	Sleep(1000);
	printf("请选择");
}
void game() {
	int ret = 0;
	int guess = 0;
	//1.生成随机数
	ret = rand()%100+1;
	//2.猜数字
	while (guess!=ret) {
		printf("现在输入你猜的数\n");
		scanf("%d", &guess);
		if (guess > ret) {
			printf("猜大了，继续猜\n");
		}
		else if (guess < ret) {
			printf("猜小了，继续猜\n");
		}
	}
	if (guess == ret) {
		printf("恭喜你猜对了,奖励一个棋棋\n");
	}
	
}
int main() {
	int input = 0;
	srand((unsigned)time(NULL));//使用rand函数前要用到srand函数它相当于一个rand创造器（库函数里有讲到）
	//在里面给一个时间戳（现在的时间与1970.1.1的差值所转化出来的秒）
	do {
	    page();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("进入游戏中\n");
			Sleep(1000);
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("你是不是搞错了,重新选一次\n");
			break;
		}
	} while (input);
	return 0;
}