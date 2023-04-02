#include<stdio.h>
#include<string.h>
//二分查找法
/*算法思想与分析：
	找到数组的最左与最右元素的下标，取平均值，找到中间元素，若中间数比要找的数大，
	那么就说明要找的数在中间数的左边，那么就再进行取平均找到下一次的中间元素并进行比较，直到左下标小于或者等于右边下标时循环结束
	就可以找到要找的值。
		  实现代码如下
					 */
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//要进行查找的数组
	int find = 7;//要找的数
	int left = 0;//最左边元素的下标
	int right = (sizeof(arr) / sizeof(arr[0])) - 1;//最右边元素的下标
	while (left<=right)//判断条件是当左下标小于右下标时   
	{
		int mid = (right + left) / 2;//取平均找到中间元素的下标
		if (find > arr[mid]) {
			left = mid + 1;
		}
		else if (find < arr[mid]) {
			right = mid - 1;
		}
		else {
			printf("要找的元素下标为：%d", mid);
			break;
		}
	}
	if(left>right){
	   printf("没有要找的元素");	
	}
	return 0;
}
