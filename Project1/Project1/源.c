//求一个数是不是素数，若不是，写出他的约数
#include<stdio.h>
int main(void)
{
	_Bool question;
	int a, div;
	scanf_s("%d", &a);
	for (div = 2, question = 1; div * div <= a; div++)
	{	
	if (a% div == 0)
	    if (div * div != a)
	
		printf_s("该数可被分为%d和 %d ", div, a / div);	
	    else	
		printf_s("该数可被分为%d", div);
	question = 0;
	}
	if (question)
		printf_s("\n这是素数.");
			
		return 0;
}