#define   _CRT_SECURE_NO_WARNINGS  1
#include<stdio.h>
/*int main()
{
	int n = 0;
	int i = 1;
	int z = 0;
	int t = 1;
	printf_s("1!+2!=3!=...+n!��ֵΪ:>n=");
	scanf_s("%d", &n);
	for (t = 1 ;t <=  n;t++)
	{
		int answer = 1;
		for (i = 1;i <= t;i++)
			answer = answer * i;
		z =z+answer;
	};
		printf_s("��=%d\n", z);
	return 0;
}*///�����˷�ʱ��ĳ����汾
//�߼��汾
int main()
{
	int n = 0;
	int i = 1;
	int z = 0;
	int t = 1;
	int answer = 1;
	printf_s("1!+2!=3!=...+n!��ֵΪ:>n=");
	scanf_s("%d", &n);
	for (t = 1;t <= n;t++)
	{
		for (;i <= t;i++)
			answer = answer * i;
		z = z + answer;
	};
	printf_s("��=%d\n", z);
	return 0;
}