#include<stdio.h>
char get_first(void);
char get_choice(void);
int get_int(void);
void count(void);
int main(void)
{
	int ch;
	while ((ch = get_choice()) != 'q')
	{
		switch (ch)
		{
		case 'a':printf_s("����ɷ��\n");
			break;
		case'b':printf_s("\a");
			break;
		case 'c':count();
			break;
		default:printf_s("��������һ���������ĸ�����������룺");
			break;

		}

	}
	printf_s("�ҵ���������ˣ�����");
	return 0;
}
	
	char get_choice(void)
   {
      int ch;
	printf_s("��������Ҫִ�е�����Ĵ��룺\n");
	printf_s("a.����         b.����\n");
	printf_s("c.����         d.�˳�\n");
	ch = get_first();
	while ((ch < 'a' || ch>'c') && ch != 'q')
	{
		printf_s("�������˴������ĸ\n");
		printf_s("������a,b,c,q����֮һ:");
		ch = get_first();
	}
	return ch;

}
   char get_first(void)
{
	int d,i;
	d = getchar();
	while ((i = getchar()) != '\n')
		continue;
	return d;
}
void count(void)
{
	int n, i;
	printf_s("�����뷶Χ��");
	n = get_int();
	for (i = 1; i <= n; i++)
		printf_s("%d\n", i);
	while ((n = getchar()) != '\n')
		continue;
}
int get_int(void)
{
	int a;
	while (scanf_s("%d", &a) != 1)
		printf_s("���������1��-2֮��������������������룺");
	return a;
}