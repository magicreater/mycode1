#define   _CRT_SECURE_NO_WARNINGS  

#include<stdio.h>

//����1�����������Ӵ�С��������

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int mid = 0;
//	int arr1[] = { a,b,c,0 };
//	printf_s("������Ҫ�Ƚϵ�������:");
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

//����2����ӡ3�ı���

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

//����3��д�����ܹ�������Լ��

//��һ�ַ���

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int mid = 0;
//	printf_s("��Ҫ�����Լ�����������ǣ�");
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
//	printf_s("�������������Լ���ǣ�%d\n", i);
//
//	return 0;
//}
//���ۣ�������ִ𰸲���Ҫ���ԣ�ѭ�������������

//�ڶ��ַ�����շת�����(С������������������ٳ�������ѭ��������ֱ�������0

//int main()
//{
//	int a, b, c, d;
//	printf_s("��Ҫ������Լ�����������ǣ�");
//	scanf_s("%d%d", &a, &b);
//	/*if (b > a)
//	{
//		c = a;
//		b = a;
//		b = c;
//	}*///�ɺ��ԣ�ԭ����b������Ϊb������Ϊa������˳��
//	while (b != 0)
//	{
//		d = a % b;
//		a = b;
//		b = d;
//	}	
//	printf_s("���Լ���ǣ�%d\n",a );
//	return 0;
//}

//�����ģ���ӡ1000-2000�е�����

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

//����5����ӡ100-200����

int main()
{
	int a,b;
	printf_s("�����ǣ�");
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