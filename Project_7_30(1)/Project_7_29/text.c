#define   _CRT_SECURE_NO_WARNINGS  

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//���񣺱�д���룬��ʾ����ַ��������ƶ������м���
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
//		system("cls");//ִ��ϵͳ��һ������
//	}
//		return 0;
//}

int main()
{
	char s[20] = {0};
	int a = 0;
	for (a = 0;a < 3;a++)
	{
		printf_s("����������:>");
		scanf_s("%s", s, 20);
		if (strcmp(s, "123456") == 0)
		{
			printf_s("������ȷ\n");
			break;
		}
		else
			printf_s("�������\n");
	}
		if (a = 3)
			printf_s("���������,�˳�����\n");
			return 0;
}