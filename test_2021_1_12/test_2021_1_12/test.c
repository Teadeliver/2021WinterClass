#define _CRT_SECURE_NO_WARNINGS 1


//int main()
//{ 
//	{
//		int a = 10;
//	}
//
//	//xxx
//	return 0;
//}

#include <stdio.h>

//int num = 10;
//int main()
//{
//	int num = 1;
//	printf("num = %d\n", num);//1
//	double d = 3.14;
//	return 0;
//}
//
#include <string.h>
//
//int main()
//{
//	//"abc";
//	//"a";
//	//"";//���ַ���
//	//�ַ���-һ���ַ�
//	//�ַ�������
//	char arr1[] = "abc";//�ַ�����ĩβ��һ��\0��'\0'���ַ����Ľ�����־
//	char arr2[] = {'a', 'b', 'c', '\0'};
//	//strlen = string length - �ַ�������
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2)); 
//
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	//%d - ����
//	//%s - �ַ���
//
//	return 0;
//}

//int main()
//{
//	printf("c:\test\test.c\n");
//	//c:\test\test.c
//	//��C��ָ�롷-����ĸ��
//	//??) - ]
//	//
//	return 0;
//}

//%d
//%s
//%c- ��ӡ�ַ�
//int main()
//{
//	//printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//
//
//	return 0;
//}

//
//int main()
//{
//	//printf("c:\\test\\test.c\n");
//	//printf("\a\a\a\a");
//	//c:\test\test.c
//	//printf("%c\n", '\123');
//	//printf("%c\n", '\x41');
//	//41
//	//4*16^1    1*16^0
//	//64+1
//	//65
//	//printf("%d\n", strlen("abcdef"));
//	//printf("%d\n", strlen("c:\test\328\test.c"));
//	//printf("%c\n", '\5');
//
//	printf("hehe\n");
//	printf("\v");
//	printf("hehe\n");
//	return 0;
//}
//

/*
int main()
{
	//C++����ע��
	//int a = 10;
	//int b = 20;
	
	//C����ע��-��֧��Ƕ��ע��
	//int c = 0;
	
	return 0;//��������0
}
*/



//int main()
//{
//	int a = 10;
//	int b = 20;
//	return 0;
//}
//

//int main()
//{
//	int input = 0;
//	printf("�������ѧϰ\n");
//	printf("��Ҫ�ú�ѧϰ��1/0����\n");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//
//	return 0;
//}
//


//int main()
//{
//	int line = 0;
//
//	while (line < 20000)
//	{
//		printf("д����:%d\n", line);
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}

//����-��ѧ
//f(x) = 2*x+1
//f(x, y) = x+y

//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//2�����������
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//
//	//int sum = num1 + num2;
//	//��װһ���������num1��num2�����
//	int sum = Add(num1, num2);
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//0-9
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//int arr[10] = { 1, 2, 3};//����ȫ��ʼ��
//	//printf("%d\n", arr[4]);//arr[4]���ڷ����±�Ϊ4��Ԫ��
//
//	//char ch[20];
//	//double d[5];
//
//	return 0;
//}

//%f-��ӡС��

//int main()
//{
//	// / %
//	//printf("%d\n", 7 / 2);//7����2����3����1
//	//printf("%d\n", 7 % 2);//7����2����3����1
//	//printf("%f\n", 7.0 / 2);
//	//����Ҫ�õ�С����/�����˱���������һ���������Ǹ�����
//	//printf("%d\n", 7 % 2.0);//err
//	return 0;
//}

//int main()
//{
//	int a = 12;//����-4���ֽ�-32bit
//	//��a�Ķ�����λ�����ƶ�1λ
//	int b = a << 1;
//	//00000000000000000000000000001100
//	//
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 3;
//	//int c = a&b;
//	//& - ��(2����)λ��
//	//0101
//	//0011
//	//0001
//	//��λ��
//	//int c = a | b;
//	//0101
//	//0011
//	//0111
//	//
//	//��λ���-��ͬΪ0������Ϊ1
//	int c = a^b;
//	//0101
//	//0011
//	//0110
//	//
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	a = a + 1;
//	a += 1;
//	
//	a = a - 4;
//	a -= 4;
//
//	return 0;
//}

//��Ŀ������-ֻ��һ��������

//int main()
//{
//	//2 + 3; - ˫Ŀ������
//	//0��ʾ�٣���0��ʾ��
//	int a = !0;
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = -1;//4���ֽ�
//	//a = -a;
//	//a = +a;
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = --a;
//	
//	//int b = a--;//��ʹ�ã���--
//	//printf("%d\n", b);//10
//	//printf("%d\n", a);//9
//
//
//	//int b = ++a;//ǰ��++����++����ʹ��
//	//printf("%d\n", b);//11
//	//printf("%d\n", a);//11
//
//	//int b = a++;//����++�� ��ʹ�ã���++
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//10
//	//printf("%d\n", a++);//
//	//printf("%d\n", a);
//
//
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);//���õ�
//	printf("b = %d\n", b);
//
//	return 0;
//}
//

//int main()
//{
//	int a = (int)3.14;
//	//int a = int(3.14);//err
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	//�߼���
//	//int c = a && b;
//	//�߼���
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}

//����������/��Ŀ������
//int main()
//{
//	int a = 3;
//	int b = 0;
//	
//	if (a > 5)
//		b = 10;
//	else
//		b = 20;
//
//	b = (a > 5 ? 10 : 20);
//
//	return 0;
//}

//int main()
//{
//	int a = (2+3, 3, 4, 5, 6+1);
//
//	printf("%d\n", a);
//
//	return 0;
//}

