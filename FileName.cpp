#define _CRT_SECURE_NO_WARNINGS 
//属于贵子豪的专属
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
	//求两个数的二进制有多少位不同
	int x = 0;
	int y = 0;
	printf("输入两个数\n");
	scanf("%d %d",&x,&y);
	printf("%d",binarycompare(x, y));
	return 0;
}