#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ListNode
{
	char name[20];
	float price;
	struct ListNode* next;
}SL;

//SL* CreatNewNode(int x, char arr[])
//{
//	SL* newnode = (SL*)malloc(sizeof(SL));
//	if (newnode == NULL)
//	{
//		printf("malloc Ê§°Ü\n");
//		exit(-1);
//	}
//
//	newnode->price = x;
//	newnode->name[20] = arr;
//	newnode->next = NULL;
//	return newnode;
//}

//SL* PushBack(int x, char y)
//{
//
//}

int main()
{

	float val = 0;
	//char bookname[20] = { 0 };
	int count = 0;
	scanf("%d", &count);
	getchar();
	SL* s1 = (SL*)malloc(sizeof(SL));
	SL* tail = s1;
	while (count--)
	{
		SL* newnode = (SL*)malloc(sizeof(SL));

		gets(newnode->name);
		scanf("%f", &val);
		newnode->price = val;
		getchar();

		newnode->next = NULL;
		tail->next = newnode;
		tail = newnode;
	}
	tail->next = NULL;
	SL* curmax = s1->next;
	SL* curmin = s1->next;
	

	float max = 0;
	char max_book[20] = {0};

	while (curmax)
	{
		if (curmax->price > max)
		{
			max = curmax->price;
			strcpy(max_book, curmax->name);
		}
		curmax = curmax->next;
	}
	printf("%.2f, %s\n", max, max_book);

	float min = 1000;
	char min_book[20] = { 0 };

	while (curmin)
	{
		if (curmin->price < min)
		{
			min = curmin->price;
			strcpy(min_book, curmin->name);
		}
		curmin = curmin->next;
	}
	printf("%.2f, %s", min, min_book);
	printf("\n");
	return 0;
}