#define _CRT_SECURE_NO_WARNINGS 
//���ڹ��Ӻ���ר��
#include<stdio.h>
int binarycompare(int x,int y) {
	int count = 0;
	int c = 0;
	c = x ^ y;
	while (c) {
		if (c&1==1) {
			count++;
		}
		c >>= 1;
	}
	return count;
}
int main() {
	//���������Ķ������ж���λ��ͬ
	int x = 0;
	int y = 0;
	printf("����������\n");
	scanf("%d %d",&x,&y);
	printf("%d",binarycompare(x, y));
	return 0;
}