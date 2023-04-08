#define _CRT_SECURE_NO_WARNINGS 
//属于贵子豪的专属
#include<stdio.h>
void bubble(int arr[],int sz) {
	int i = 0;
	int temp = 0;
	for (i = 0; i < sz - 1; i++) {
		//确定冒泡排序的趟数
		int flag = 1;//假设数组已经是有序
		for (int j = 0; j <sz-i-1 ; j++) {
			if (arr[j] > arr[j + 1]) {
				temp=arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				flag = 0;
			}
		}
		if (flag == 1) {
			break;
		}
	}
}
int main(){
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr,sz);
	for (int i = 0; i < sz; i++) {
		printf("%d", arr[i]);
	}
	return 0;
}