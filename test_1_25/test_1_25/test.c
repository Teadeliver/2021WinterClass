#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//算术操作 / %

//int main()
//{
//	//   / - 除号  除号操作符的2个操作数都是整数，执行的是整数除法
//	//             除号的操作数有一个数是浮点数是，就执行的是浮点数的除法
//	//printf("%d\n", 7 / 2);
//	printf("%.2f\n", 7 / 2.0);
//	//printf("%d\n", 7 / 0);//err
//
//	//printf("%d\n", 7 % 2);//取模得到的是余数
//
//	return 0;
//}

//移位操作符
//<< -左移操作符
//>> -右移操作符

//int main()
//{
//	int a = 5;
//	//整形是4个字节，32bit位的
//	//a >> 1;
//	int b = a << 1;
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//
//	//左移-移动其实是存储在内存中的二进制的补码
//	//规则：左移操作符：左边丢弃，右边补0
//
//	//a的二进制位
//	//整数的二进制怎么描述呢？
//	//整数的二进制有三种表示形式：原码，反码，补码
//	//正整数的原码、反码、补码是相同的
//	//负整数的原码、反码、补码是要计算的
//	//00000000000000000000000000000101 - 补码
//	//内存中存储的是补码
//	return 0;
//}
//
//int main()
//{
//	int a = -1;
//	//-1
//	//10000000000000000000000000000001 - 原码
//	//原码的符号位不变，其他为按位取反，得到就是反码
//	//11111111111111111111111111111110 - 反码
//	//反码+1，得到的就是补码
//	//11111111111111111111111111111111 - 补码
//	//
//	int b = a << 1;
//	//11111111111111111111111111111110-补码
//	//11111111111111111111111111111101-反码
//	//10000000000000000000000000000010-原码
//	//-2
//
//	printf("%d\n", b);//原码
//
//	return 0;
//}


//>> 右移操作符
//
//int main()
//{
//	int a = 5;
//	int b = a >> 1;
//	printf("%d\n", b);
//	//右移操作符
//	//
//	//1. 算术右移
//	//   右边丢弃，左边补原来的符号位
//	//2. 逻辑右移
//	//   右边丢弃，左边补0
//	//
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a^b;//^ 按（2进制）位异或
//	//异或：相同为0，相异为1
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	printf("%d\n", c);
//
//	//int c = a | b;//| 按（2进制）位或
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000111
//	//
//	//printf("%d\n", c);
//
//	//int c = a&b;//& 按（2进制）位与
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000001
//	//
//	//printf("%d\n", c);
//	return 0;
//}

//写一个代码交换2个整形变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//交换的时候，创建了一个tmp变量
//	int tmp = 0;//空瓶
//
//	printf("a=%d b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//写一个代码交换2个整数，不能使用第三个变量
//会整形溢出!
//整形是4个字节
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("a=%d b=%d\n", a, b);
//	a = a + b;
//	b = a - b;//b=3
//	a = a - b;//a=5
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	printf("a=%d b=%d\n", a, b);
//	a = a^b;//异或的结果：密码
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}
//
//


//int main()
//{
//	int a = 15;
//	a & 1;//
//	
//	//00000000000000000000000000001111
//	//00000000000000000000000000000001
//	//00000000000000000000000000000001
//	
//	return 0;
//}


//int main()
//{
//	int a = 15;//初始化
//	a = 20;//赋值
//	a = a + 10;
//	a += 10;
//
//	a = a >> 1;
//	a >>= 1;
//
//	a = a^4;
//	a ^= 4;
//	return 0;
//}
//
//
//int main()
//{
//	int sorted = 0;
//	if (!sorted)//没有排序好的做什么事情
//	{
//
//	}
//	if (sorted)//排好序做什么事情
//	{
//
//	}
//	/*if (sorted == 1)
//	{
//
//	}*/
//}

//int main()
//{
//	int a = -3;
//	a = -a;
//	a = +a;
//
//	return 0;
//}

//
//int main()
//{
//	//&a    a&b
//	//*p    a*b  
//	int a = 10;
//	int * p = &a;//&-取地址操作符
//	*p = 20;//解引用操作符-间接访问操作符
//	return 0;
//}
//


//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//
//	int arr2[5] = { 0 };
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", sizeof(int[5]));
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//sizeof 其实是一个操作符-不是函数
//	//strlen - 求字符串长度的函数-只能适应于字符串
//
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	return 0;
//}

int main()
{
	short s = 3;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));
	printf("%d\n", s);

	return 0;
}