#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10];
	int i, j, t;
	printf("�����룺\n");
	for (i = 0; i < 10;i++)
		scanf("%d", &arr[i]);
	printf("\n");
	for (j = 0; j < 9; j++)//9��ѭ��������9�αȽ�
		for (i = 0; i<9 - j;i++)//ÿ�ν���9-j�αȽ� 
		if (arr[i]>arr[i + 1])
		{
		t = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = t;
		}
	printf("�����\n");
	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");



	
	return 0;
}