#define _CRT_SECURE_NO_WARNINGS 
//���ڹ��Ӻ���ר��
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
	printf("������Ҫ�ƶ�������\n");
	scanf("%d", &n);
	printf("�ƶ���������:\n");
	Sleep(500);
	Hannoi(n,A,B,C);
	return 0;
}