#define _CRT_SECURE_NO_WARNINGS 
//���ڹ��Ӻ���ר��
#include "game.h"
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |     Ҫ��ӡ������
void game() {  //ʵ����Ϸ�ķ���
	char board[ROW][COL] = { 0 };//������洢����
	Initboard(board, ROW, COL);//��ʼ������ ��game.h������,��game.c��ʵ��
	Displayboard(board, ROW, COL);//��ӡ����
	while (1) {
		int ret = 0;
		Gamerplay(board, ROW, COL);//�������
		Displayboard(board, ROW, COL);
		ret=isWin(board,ROW,COL);
		if (ret != 'C') {
			if (ret == '*') {
				printf("���Ӯ\n");
				break;
			}
			else if(ret=='P') {
				printf("ƽ��\n");
				break;
			}
		}
		Complay(board, ROW, COL);//��������
		Displayboard(board, ROW, COL);
		ret =isWin(board,ROW,COL);
		if (ret != 'C') {
			if (ret == '$') {
				printf("����Ӯ\n");
				break;
			}
			else if (ret == 'P') {
				printf("ƽ��\n");
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
		printf("��ѡ��:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("����ѡ��.\n");
			break;
		}
	}while(input);
	return 0;
}