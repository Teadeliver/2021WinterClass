#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int arr[10] = { 0 };
//
//	//arr[4] = 5;//[]�����±����ò�����
//	//2 + 3;
//
//	int ret = Add(2, 3);//()�������ò�����
//
//	return 0;
//}

//�ؼ���

//int main()
//{
//	int;
//	char;
//	return 0;
//}

//
//void test(void)
//{
//
//}
//
//int main()
//{
//	//�Զ�����-����
//	int a = 10;//�ֲ�����-�Զ�����
//	signed int age;
//	unsigned int age;
//
//	return 0;
//}
//
//


//typedef unsigned int uint;
////С��  - ����
//
//int main()
//{
//	unsigned int num = 10;
//	uint num2 = 0;
//
//	return 0;
//}


//static - ��̬��
//static���ξֲ�����
//�ı��˾ֲ���������������-������û�б仯

//static����ȫ�ֱ���
//���ⲿ�������ԣ��ĳ����ڲ���������

//static���κ���



//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	static int a = 1;//static���ξֲ�����
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//����
//extern �����ⲿ���ŵ�

//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}


//�����ⲿ����
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//register


//int main()
//{
//	register int a = 10;
//	//&a;//err
//	//
//	//register�ǽ�����Լ������ı����洢���Ĵ�����
//	//
//	return 0;
//}
//
//#define MAX 100
//#define STR "hello bit"
//
//#define CH 'W'
//
//int main()
//{
//	//int m = MAX;
//	//printf("%d\n", m);
//	//printf("%s\n", STR);
//	printf("%c\n", CH);
//	return 0;
//}
//
//#define ADD(X,Y) (X+Y)
//#define MAX(X, Y)  ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = ADD(a, b);
//	printf("%d\n", ret);//30
//
//	printf("%d\n", MAX(a, b));//20
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", a);
//
//	//%p ���յ�ַ�ĸ�ʽ��ӡ
//	//printf("%p\n", &a);//&ȡ��ַ������
//	int * pa = &a;//pa��ר��������ŵ�ַ��-��pa�ͽ�ָ�����
//	*pa = 20;//�����ò���
//	printf("%d\n", a);
//
//	/*char ch = 'w';
//	char* pc = &ch;*/
//
//	return 0;
//}
//


//
//int main()
//{
//	double d = 3.14;
//	printf("%lf\n", d);
//	double * pd = &d;
//	*pd = 3.5;
//	printf("%lf\n", d);
//
//	return 0;
//}

//�����ַ
//�����ַ
//
//int main()
//{
//	//4 ����8 ���ֽ�
//	int a = 10;
//	printf("%p\n", &a);
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}
//
//

//����ѧ������
//struct Stu
//{
//	//����ѧ��������
//	char name[20];//����-�ַ���-�ַ�����
//	short age;//����-int
//	char sex[8];//�Ա�-�ַ���
//};
//
//int main()
//{
//	//�ṹ��Ĵ����ͳ�ʼ��
//	struct Stu s1 = {"����", 20, "��"};//����-����
//	struct Stu s2 = { "����", 30, "Ů" };//����-����
//	//printf("%s %d %s\n", s1.name, s1.age, s1.sex);//�ṹ��Ա���ʲ����� �ṹ�����.�ṹ���Ա
//	
//	struct Stu* ps = &s1;
//	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);//1
//	printf("%s %d %s\n", ps->name, ps->age, ps->sex);//2 //->�ṹ��Ա���ʲ�����    �ṹ��ָ��->�ṹ���Ա
//
//
//	//ps->name ͨ��ps�ҵ���ָ��Ķ���ĳ�Աname
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	double price;
//	char id[20];
//};

//0    -����0
//'0'  -ASCIIֵ��48
//'\0' -ֵ��0
//'\0'   0  ��������ͬ��
//NULL - ��ָ�� - 0

//EOF -end of file �ļ�������־

#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	char arr[] = { 'b', 'i', 't' };
//	//[b i t]
//	printf("%d\n", strlen(arr));
//	return 0;
//}



//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}
//



#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	//��������ӡ
//	int m = a / b;
//	int n = a%b;
//
//	printf("%d %d\n", m, n);
//
//	return 0;
//}
//
//
//int get_max(int x, int y)
//{
//	int ret = x > y ? x : y;
//	return ret;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//��a��b�Ľϴ�ֵ
//	//int m = a > b ? a : b;
//	int m = get_max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}

//
//int main()
//{
//	//int a = 10;
//	//printf("hehe\n");
//	//2 + 3;//
//	//;//�����
//	//if���Ҳ�����;
//
//	/*int age = 20;
//	if (age >= 18)
//		printf("����\n");
//*/
//
//	int age = 20;
//
//	if (age >= 18)
//	{
//		printf("����\n");
//		printf("̸����\n");
//	}
//	else
//	{
//		printf("δ����\n");
//	}
//
//	return 0;
//}


//ifʵ�ֶ��֧
//
//int main()
//{
//	int age = 0;
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else if (age >= 18 && age < 30)
//	//	printf("����\n");
//	//else if (age >= 30 && age < 50)
//	//	printf("����\n");
//	//else if (age >= 50 && age <= 100)
//	//	printf("����\n");
//	//else
//	//	printf("������\n");
//
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//		if (age >= 18 && age < 30)
//			printf("����\n");
//		else if (age >= 30 && age < 50)
//			printf("����\n");
//		else if (age >= 50 && age <= 100)
//			printf("����\n");
//		else
//			printf("������\n");
//	}
//	
//
//	return 0;
//}

#include <stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
	{
		printf("haha\n");
	}
	return 0;
}

//������
//��Ҫ��