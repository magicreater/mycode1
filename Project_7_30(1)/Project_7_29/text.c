#define   _CRT_SECURE_NO_WARNINGS  

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//任务：编写代码，演示多个字符从两端移动，向中间汇聚
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!!";
//	char arr2[] = "######################";
//	int left = 0;
//	size_t right = strlen(arr1) - 1;
//	for (;left <= right;)
//	{
//		arr2[right] = arr1[right];
//		arr2[left] = arr1[left];
//		left++;
//		right--;
//		printf_s("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//执行系统的一个函数
//	}
//		return 0;
//}

int main()
{
	char s[20] = {0};
	int a = 0;
	for (a = 0;a < 3;a++)
	{
		printf_s("请输入密码:>");
		scanf_s("%s", s, 20);
		if (strcmp(s, "123456") == 0)
		{
			printf_s("密码正确\n");
			break;
		}
		else
			printf_s("输入错误\n");
	}
		if (a = 3)
			printf_s("输入错误多次,退出程序\n");
			return 0;
}