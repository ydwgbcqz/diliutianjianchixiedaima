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
//int main()//��ϰһ������һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺1234�����1 2 3 4.
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
//		count++;//��д����ʱ���ﴴ������ʱ����count
//		str++;//ָ�����++��ʱ���ǰ�����Ӧ�ĵ�ַ����
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
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
////�Ѵ��»�С
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
////3
//int main()//��ϰ2����д����ʱ����������ʱ���������ַ�������
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//
//	printf("len=%d\n", len);
//	return 0;
//}
//int Fac1(int n)//��ϰ3����n�Ľ׳ˣ������������(û���õݹ�ķ���)
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
//	ret = Fac1(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}
//int Fac2(int n)//��ϰ3����n�Ľ׳ˣ������������(���õݹ�ķ���)
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
//	ret = Fac2(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}
//int Fib(int n)//���n��쳲��������������������1 1 2 3 5 8 13 21 34 55......쳲���������
//              //���ǻᷢ�֣����ֵݹ�ķ�������������Ѳ������ã�����Ҫ���д����ظ����㣬����Ҫ��һ������
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
//	scanf("%d", &n);//��д��������д������˼·��TDD-������������
//	ret =Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int Fib(int n)//���n��쳲��������������������1 1 2 3 5 8 13 21 34 55......쳲���������
//              //�Ż�쳲����������n��쳲���������������������ķ���
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
//	scanf("%d", &n);//��д��������д������˼·��TDD-������������
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//} 