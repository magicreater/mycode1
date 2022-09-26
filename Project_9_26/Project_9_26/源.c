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
		case 'a':printf_s("你是煞笔\n");
			break;
		case'b':printf_s("\a");
			break;
		case 'c':count();
			break;
		default:printf_s("你输入了一个错误的字母，请重新输入：");
			break;

		}

	}
	printf_s("我的任务完成了，滚蛋");
	return 0;
}
	
	char get_choice(void)
   {
      int ch;
	printf_s("输入你想要执行的任务的代码：\n");
	printf_s("a.建议         b.铃声\n");
	printf_s("c.计数         d.退出\n");
	ch = get_first();
	while ((ch < 'a' || ch>'c') && ch != 'q')
	{
		printf_s("你输入了错误的字母\n");
		printf_s("请输入a,b,c,q其中之一:");
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
	printf_s("请输入范围：");
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
		printf_s("你必须输入1，-2之类的整形数，请重新输入：");
	return a;
}