#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	//int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};//�ڴ�����ʱ�򣬸�ֵ���г�ʼ��
//	//int arr[3][5] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10 } };//�ڴ�����ʱ�򣬸�ֵ���г�ʼ��
//	//int arr[][4] = { { 1, 2, 3, 4 }, { 2, 3, 4, 5 } };
//	//int arr[2][] = { { 1, 2, 3, 4 }, { 2, 3, 4, 5 } };
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int i = 0;
//
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 5; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			arr[i][j] = 6;
//		}
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	int* p = &arr[0][0];
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//}
//
//
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	//	}
//	//}
//	return 0;
//}


//дһ�������㷨-�����������������
//ð������
//void bubble_sort(int *arr)
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ������
//		int j = 0;
//		int flag = 1;//�����Ѿ�����
//		for (j = 0; j <sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//��������
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//���������
//	//���鴫�ε�ʱ��
//	//����������Ԫ�صĵ�ַ
//	//arr == &arr[0]
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);//1
//
//	return 0;
//}
//


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	return 0;
//}

//
//��������������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������) - ��������ʾ���������飬������Ԫ�صĵ�ַ.sizeof(������)�����������������Ĵ�С
//2. &����������������ʾ�������飬����ȡ��������������ĵ�ַ������
//����֮�⣬���� ��������������Ԫ�صĵ�ַ
//

//int main()
//{
//	int arr[3][4] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0][0]);
//	printf("%d\n", sz);
//	return 0;
//}

//int main()
//{
//	int arr[4] = {1,2,3,4};
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//	return 0;
//}
//
//void print(int arr[3][5], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	print(arr, 3, 5);//��ӡ��ά����arr
//
//	return 0;
//}


