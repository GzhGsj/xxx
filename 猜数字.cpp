#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
//��������Ϸ
void page() {
	printf("                                             \n");
	Sleep(1000);
	printf("                  #������#                   \n");
	Sleep(1000);
	printf("                 1.��ʼ��Ϸ                  \n");
	Sleep(1000);
	printf("                 0.�˳���Ϸ                  \n");
	Sleep(1000);
	printf("                                             \n");
	Sleep(1000);
	printf("��ѡ��");
}
void game() {
	int ret = 0;
	int guess = 0;
	//1.���������
	ret = rand()%100+1;
	//2.������
	while (guess!=ret) {
		printf("����������µ���\n");
		scanf("%d", &guess);
		if (guess > ret) {
			printf("�´��ˣ�������\n");
		}
		else if (guess < ret) {
			printf("��С�ˣ�������\n");
		}
	}
	if (guess == ret) {
		printf("��ϲ��¶���,����һ������\n");
	}
	
}
int main() {
	int input = 0;
	srand((unsigned)time(NULL));//ʹ��rand����ǰҪ�õ�srand�������൱��һ��rand���������⺯�����н�����
	//�������һ��ʱ��������ڵ�ʱ����1970.1.1�Ĳ�ֵ��ת���������룩
	do {
	    page();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������Ϸ��\n");
			Sleep(1000);
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���ǲ��Ǹ����,����ѡһ��\n");
			break;
		}
	} while (input);
	return 0;
}