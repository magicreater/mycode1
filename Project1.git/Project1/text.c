
#include<stdio.h>
#include<string.h>
//#define MAX(X,Y) (X>Y?X:Y)
//int Max(int x,int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int max = MAX(29,90);
//	printf_s("%d\n", max);
//	int max1 = Max(89, 9);
//	printf_s("%d\n", max1);
//	return 0;
//}
//int main()
//{
//	int line = 0;
//while(line<20000)
//{
//	printf_s("输入一行代码");
//	line++;
//	printf_s("%d\n", line);
//}
//if (line = 20000)
//printf_s("好offeer\n");
//else
//printf_s("搬砖\n");
//	return 0;
//}
//void text()
//{
//	static int a = 1;
//	a++;
//	printf_s(" a=% d\t", a);
//}
//int main()
//{
//	int i = 0;
//while(i<5)
//{
//	text();
//	i++;
//	printf_s("i=%d\n", i);
//}
//	return 0;
//}
//
int main()
{
	int M = 0;
	scanf_s("%d", &M);
		if (M % 5== 0)
	printf("yes\n");
		else
			printf("no\n");
	return 0;
}