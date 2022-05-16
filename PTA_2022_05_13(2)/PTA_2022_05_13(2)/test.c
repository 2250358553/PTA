#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int arr[100] = { 0 };
	int i = 0;
	int count = 0;
	scanf("%d", &count);
	while (count--)
	{
		scanf("%d", &arr[i]);
		i++;
	} 
	return 0;
}