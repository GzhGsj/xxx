#define _CRT_SECURE_NO_WARNINGS 
//���ڹ��Ӻ���ר��
#include "game.h"
void test() {
	printf("                                         ");
	printf("        1.��ʼ��Ϸ       0.�˳���Ϸ      ");
	printf("                                         ");
}
void game() {
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	srand((unsigned int)time(NULL));
	//��ʼ������
	Initboard(mine,ROWS,COLS,' ');
	Initboard(show,ROWS,COLS,'*');
	Display(show, ROW, COL);//��ӡ����
	//������
	Setmine(mine,ROW,COL);
	//Display(mine, ROW, COL);
	//�Ų���
	Findmine(mine,show,ROW,COL);
}
int main() {
	int input = 0;
	do {
		test();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				game();
				break;
		case 0:
			break;
		default:
			printf("������Ĳ���ȷ�����������롣");
			break;
		}
	} while(input);
	return 0;
}
