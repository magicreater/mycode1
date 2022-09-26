//程序目的：算出范围内所有数的平方和
#include<stdio.h>
#include<stdbool.h>
bool chet(long min, long max, long high, long low);
long get_long(void);
long sum(long x, long y);
int main(void)
{
	long a, b,answer;
	const MAX = 100000L;
	const MIN = -100000L;
	printf_s("输入两个数，求这两个数之间所有数的平方和\n(通过将两个表示范围的数都设为0来结束程序）\n");
	printf_s("现在请输入最小值：");
	a = get_long();
	printf_s("现在请输入最大值：");
	b = get_long();
	while (a != 0 || b != 0)
	{
		if (chet(a, b, MAX, MIN))
			printf_s("请再试一次\n");
		else
		{
			answer = sum(a, b);
			printf("%ld和%ld之间所有数的平方和是%ld\n", a, b, answer);
		}
		printf_s("请再输入两个数，求这两个数之间所有数的平方和\n(通过将两个表示范围的数都设为0来结束程序）\n");
		printf_s("现在请输入最小值：");
		a = get_long();
		printf_s("现在请输入最大值：");
		b = get_long();
	}
	printf_s("完成工作");
	return 0;
}
long get_long(void)
{
	long input;
	char ch;
	while ((scanf_s("%ld", &input)) != 1)//scanf如果不能对应类型将会把数据留在缓冲区
	{		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf_s("你只能输入形如-12，23，0之类的数，现在请你重新输入:");
	}
	return input;
}
bool chet(long min, long max, long high, long low)
{
	bool not_good = false;
	if (min > max)
	{
		printf_s("你输入的最小值比最大值大");
			not_good = true;
	}
	if (min < low || max < low)
	{
		printf_s("你输入的数小于最小范围");
		not_good = true;
	}
	if (min > high || max > high)
	{
		printf_s("你输入的数大于最大范围");
		not_good = true;
	}
	return not_good;
}
long sum(long x, long y)
{
	long sum=0;
	int i;
	for (i = x; i <= y; i++)
		sum += i * i;
	return sum;

}
