#include<stdio.h>
#include<string.h>
//���ֲ��ҷ�
/*�㷨˼���������
	�ҵ����������������Ԫ�ص��±꣬ȡƽ��ֵ���ҵ��м�Ԫ�أ����м�����Ҫ�ҵ�����
	��ô��˵��Ҫ�ҵ������м�������ߣ���ô���ٽ���ȡƽ���ҵ���һ�ε��м�Ԫ�ز����бȽϣ�
	���и�ѭ�� �Ϳ����ҵ�Ҫ�ҵ�ֵ��
		  ʵ�ִ�������
					 */
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//Ҫ���в��ҵ�����
	int find = 7;//Ҫ�ҵ���
	int left = 0;//�����Ԫ�ص��±�
	int right = (sizeof(arr) / sizeof(arr[0])) - 1;//���ұ�Ԫ�ص��±�
	while (1)   
	{
		int mid = (right + left) / 2;//ȡƽ���ҵ��м�Ԫ�ص��±�
		if (find > arr[mid]) {
			left = mid + 1;
		}
		else if (find < arr[mid]) {
			right = mid - 1;
		}
		else {
			printf("Ҫ�ҵ�Ԫ���±�Ϊ��%d", mid);
			break;
		}
	}
	return 0;
}