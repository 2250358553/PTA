#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr1[100100] = { 0 };
	int i = 0;

	//获取数据个数
	int count = 0;
	scanf("%d", &count);
	int t = count;
	int k = count + 1;



	//将数据存入数组中
	while (count--)
	{
		scanf("%d", &arr1[i]);
		i++;

		/*if (count <= 0)
		{
			break;
		}*/
	}

	//判断有多少个大的
	int arr2[1010] = { 0 };
	int n = 0;
	int m = 0;

	for (m = -1; m <= 1001 && k > 0; m = arr1[n] + 1)
	{
		if (m == -1)
		{
			k--;
			continue;
		}
		else
		{
			while (m <= 1001)
			{
				arr2[m]++;
				m++;
			}
			n++;
			k--;
		}
	}

	int q = 0;
	for (q = 0; q < t; q++)
	{
		printf("%d ", arr2[arr1[q]]);
	}
	printf("\n");

	return 0;
}
