#define _CRT_SECURE_NO_WARNINGS 
//属于贵子豪的专属
#include<stdio.h>
int main() {
	int i = 0;
	int j = 0;
	int a = 0;
	for (i = 1; i < 10; i++) {
		for (j = 1; j <=i; j++) {
			a = i * j;
			printf("%d*%d=%-2d ", j, i, a);
		}
		printf("\n");
	}
	return 0;
}