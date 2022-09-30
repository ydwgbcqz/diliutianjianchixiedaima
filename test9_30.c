#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"add.h"
#include<string.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//} 
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()//练习一：接受一个整型值（无符号），按照顺序打印它的每一位。例如：1234，输出1 2 3 4.
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num); 
//	return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;//编写函数时这里创建了临时变量count
//		str++;//指针变量++的时候是把他对应的地址向后变
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//
//	printf("len=%d\n", len);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////把大事化小
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
////3
//int main()//练习2：编写函数时不允许创建临时变量，求字符串长度
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//
//	printf("len=%d\n", len);
//	return 0;
//}
//int Fac1(int n)//练习3：求n的阶乘（不考虑溢出）(没采用递归的方法)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);//循环的方式
//	printf("%d\n", ret);
//	return 0;
//}
//int Fac2(int n)//练习3：求n的阶乘（不考虑溢出）(采用递归的方法)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//循环的方式
//	printf("%d\n", ret);
//	return 0;
//}
//int Fib(int n)//求第n个斐波那契数（不考虑溢出）1 1 2 3 5 8 13 21 34 55......斐波那契数列
//              //我们会发现，这种递归的方法对于这里而已并不好用，而且要进行大量重复计算，所以要换一个方法
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);//先写主函数再写函数的思路叫TDD-测试驱动开发
//	ret =Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int Fib(int n)//求第n个斐波那契数（不考虑溢出）1 1 2 3 5 8 13 21 34 55......斐波那契数列
//              //优化斐波那契数求第n个斐波那契数（不考虑溢出）的方法
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);//先写主函数再写函数的思路叫TDD-测试驱动开发
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//} 