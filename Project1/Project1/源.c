//��һ�����ǲ��������������ǣ�д������Լ��
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
	
		printf_s("�����ɱ���Ϊ%d�� %d ", div, a / div);	
	    else	
		printf_s("�����ɱ���Ϊ%d", div);
	question = 0;
	}
	if (question)
		printf_s("\n��������.");
			
		return 0;
}