#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
////
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//��arr������������в���һ������k
//	int k = 0;
//	//sizeof(arr)-�������������ܴ�С����λ���ֽ�-40
//	//sizeof(arr[0])-������������һ��Ԫ�صĴ�С-4
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	scanf("%d", &k);
//	//�۰����
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	//1.2.
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}

#include <limits.h>

//int main()
//{
//	int a = 2147483646;
//	int b = 2147483646;
//	int c = (a + b) / 2;
//	printf("%d\n", c);
//
//	return 0;
//}

//welcome to bit!!!!!!
//####################
//w##################!
//we################!!
//wel##############!!!
//...
//welcome to bit!!!!!!
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	char buf[] = "bit";
//	//[b i t \0]
//	// 0 1 2 3
//	//sizeof(buf)/sizeof(buf[0])-2;
//	//strlen(buf)-1;
//
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��λ�Ǻ���
//		system("cls");//system������ִ��ϵͳ�����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//abcdef
//abcq
//
//int main()
//{
//	int i = 0;
//	//�����������
//	//������ȷ���������ַ�����"123456"
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//�����ַ����ıȽϲ���ʹ��==��Ӧ��ʹ��strcmp����
//		//strcmp - �о�����ֵ
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ����¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//
//	return 0;
//}
//
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("**********************\n");
//	printf("*****  1. play   *****\n");
//	printf("*****  0. exit   *****\n");
//	printf("**********************\n");
//}
////RAND_MAX 0x7fff
////0-32767
////%100
////0-99 +1
////1-100
//
//void game()
//{
//	//1. ���������(1-100)
//	//�����ϵ�ʱ�����ڷ����仯��
//	//time()�������صľ���ʱ���
//	int ret = rand()%100+1;//���������������
//	//printf("%d\n", ret);
//	//2. ������
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input = 0;
//
//	//������������һ�ξ���
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("��ѡ��(1/0):>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//
//


//void test()
//{
//
//
//}
//
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	goto flag;
//
//	return 0;
//}

//дһ���ػ�����
//1�����ڹػ�
//1���������룺������ȡ���ػ�
//
#include <string.h>
#include <stdlib.h>

//int main()
//{
//	//shutdown -s -t 60  
//	char input[20] = "";
//	system("shutdown -s -t 60");//����ʱ��ʼ�ػ�
//	while (1)
//	{
//
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//
//int main()
//{
//	//shutdown -s -t 60  
//	char input[20] = "";
//	system("shutdown -s -t 60");//����ʱ��ʼ�ػ�
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}


#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr[] = { 'b', 'i', 't' };
//	printf("%d\n", strlen(arr));
//	return 0;
//}
//

//#include <stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)
//	{
//		if (i = 5)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 16;
//	default: b = 0;
//	}
//	return b;
//}
//
//int main()
//{
//	int ret = func(1);
//	printf("%d\n", ret);
//	return 0;
//}


#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	//0 1 2 3 4 5 6 7 8 9 10
//	for (i = 0; i < 10; i++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//

//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//		//
//	case 2:
//		printf("third");
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//����
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	//�Ӵ�С���
//	printf("%d %d %d\n", a, b, c);//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int a = 16;
//	int b = 24;
//	scanf("%d %d", &a, &b);
//	//���Լ
//	int i = (a > b) ? b : a;
//	for (; i >= 1; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//
//	return 0;
//}


int main()
{
	int a = 16;
	int b = 24;
	scanf("%d %d", &a, &b);
	//���Լ
	//շת�����

	int c = 0;
	while (c = a%b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	//��С������ = a*b/���Լ��


	return 0;
}