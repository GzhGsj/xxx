#define _CRT_SECURE_NO_WARNINGS 
//属于贵子豪的专属
#include<stdio.h>
#include<windows.h>
void move(char A, char C) {
	printf("%c->%c\n",A,C);
	Sleep(500);
}
void Hannoi(int n,char A,char B,char C){
	if (n == 1) {
		move(A, C);
	}
	else {
		Hannoi(n - 1, A, C, B);
		move(A, C);
		Hannoi(n - 1, B, A, C);
	}
}
int main() {
	char A = 'A';
	char B = 'B';
	char C = 'C';
	int n = 0;
	printf("输入你要移动的盘数\n");
	scanf("%d", &n);
	printf("移动过程如下:\n");
	Sleep(500);
	Hannoi(n,A,B,C);
	return 0;
}