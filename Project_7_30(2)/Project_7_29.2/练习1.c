#define   _CRT_SECURE_NO_WARNINGS  

#include<stdio.h>

//任务1：将三个数从大到小重新排序

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int mid = 0;
//	int arr1[] = { a,b,c,0 };
//	printf_s("请输入要比较的三个数:");
//	scanf_s("%d%d%d", &a, &b, &c);
//	if (b > a)
//	{
//		mid = b;
//		b = a;
//		a = mid;
//	}
//	if(c>b)
//	{
//		mid = b;
//		b = c;
//		c = mid;
//	}
//	if(c>a)
//	{
//		mid = c;
//		c = a;
//		a = mid;
//	}
//	printf_s("%d %d %d/n", a, b, c);
//	return 0;
//}

//任务2：打印3的倍数

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100;i++)
//	{
//		if (i % 3 == 0)
//			printf_s("%d ", i);
//	}
//	return 0;
//}

//任务3：写代码能够算出最大公约数

//第一种方法

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int mid = 0;
//	printf_s("你要求最大公约数的两个数是：");
//	scanf_s("%d%d", &a, &b);
//	if (b > a)
//	{
//		mid = b;
//		b = a;
//		a = mid;
//	}
//	for (i = a;i <= a;i--)
//	{
//		if (a % i == 0 &&  b % i == 0)
//			break;
//	}
//	printf_s("这两个数的最大公约数是：%d\n", i);
//
//	return 0;
//}
//结论：如果发现答案不对要调试，循环条件考虑清楚

//第二种方法：辗转相除法(小的数除大的数，余数再除除数，循环往复，直到结果是0

//int main()
//{
//	int a, b, c, d;
//	printf_s("你要求的最大公约数的两个数是：");
//	scanf_s("%d%d", &a, &b);
//	/*if (b > a)
//	{
//		c = a;
//		b = a;
//		b = c;
//	}*///可忽略：原因：若b大，余数为b，除数为a，交换顺序
//	while (b != 0)
//	{
//		d = a % b;
//		a = b;
//		b = d;
//	}	
//	printf_s("最大公约数是：%d\n",a );
//	return 0;
//}

//任务四：打印1000-2000中的闰年

//int main()
//{
//	int a = 0;
//	for (a = 1000;a <= 2000;a++)
//		if (a % 4 == 0 && a%100 != 0)
//			printf_s("%d ", a);
//	if (a % 100 == 0 && a % 400 == 0)
//		printf_s("%d ", a);
//
//	return 0;
//}

//任务5：打印100-200素数

int main()
{
	int a,b;
	printf_s("素数是：");
	for (a = 100;a <= 200;a++)
	{
		for (b = 2;b <a;b++)
		{
			if (a % b == 0)
				break;
		}
		if (b == a )
			printf_s("%d ", a);
	}

	return 0;

}