//����Ŀ�ģ������Χ����������ƽ����
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
	printf_s("����������������������֮����������ƽ����\n(ͨ����������ʾ��Χ��������Ϊ0����������\n");
	printf_s("������������Сֵ��");
	a = get_long();
	printf_s("�������������ֵ��");
	b = get_long();
	while (a != 0 || b != 0)
	{
		if (chet(a, b, MAX, MIN))
			printf_s("������һ��\n");
		else
		{
			answer = sum(a, b);
			printf("%ld��%ld֮����������ƽ������%ld\n", a, b, answer);
		}
		printf_s("��������������������������֮����������ƽ����\n(ͨ����������ʾ��Χ��������Ϊ0����������\n");
		printf_s("������������Сֵ��");
		a = get_long();
		printf_s("�������������ֵ��");
		b = get_long();
	}
	printf_s("��ɹ���");
	return 0;
}
long get_long(void)
{
	long input;
	char ch;
	while ((scanf_s("%ld", &input)) != 1)//scanf������ܶ�Ӧ���ͽ�����������ڻ�����
	{		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf_s("��ֻ����������-12��23��0֮�����������������������:");
	}
	return input;
}
bool chet(long min, long max, long high, long low)
{
	bool not_good = false;
	if (min > max)
	{
		printf_s("���������Сֵ�����ֵ��");
			not_good = true;
	}
	if (min < low || max < low)
	{
		printf_s("���������С����С��Χ");
		not_good = true;
	}
	if (min > high || max > high)
	{
		printf_s("����������������Χ");
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
