#define _CRT_SECURE_NO_WARNINGS 
//属于贵子豪的专属
#include<stdio.h>
int FrogJumping(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	if (n > 2) {
		return FrogJumping(n - 1) + FrogJumping(n - 2);
	}
}
int main() {
	int a = 0;
	int n = 0;
	scanf("%d", &n);
	printf("%d",FrogJumping(n));
	return 0;
}