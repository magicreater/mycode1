#define   _CRT_SECURE_NO_WARNINGS  

#include<stdio.h>

#include<string.h>

//任务：写一个代码能够找出数组中的所需数（二分查找法）

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int num = 0;
	scanf_s("%d", &num);
	int mid = 0;
	for (;left <= right;)
	{
		mid = (left + right) / 2;
		if (num <arr [mid])
			right = mid - 1;
		else if (num >arr [mid])
			left = mid + 1;
		else if(num =arr [mid])
		{
			printf_s("找到了,下标是:%d\n", mid);
		break;
		}
	}
	if (left > right)
		printf_s("找不到，抱歉\n");
	return 0;
}