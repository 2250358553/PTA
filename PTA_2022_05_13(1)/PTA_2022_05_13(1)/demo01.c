#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode
{
	int val;
	int size;
	struct ListNode* next;
}SL;

int main()
{/*
	SL* s1 = (SL*)malloc(sizeof(SL));
	SL* tail = s1;*/
	int i = 0;
	int T = 0;
	scanf("%d", &T);
	

	while (T--)
	{
		SL* s1 = (SL*)malloc(sizeof(SL));
		SL* tail = s1;

		int n = 0;
		scanf("%d", &n);
		int data = 0;
		while (n--)
		{
			SL* newnode = (SL*)malloc(sizeof(SL));
			scanf("%d", &data);
			i++;
			newnode->val = data;
			newnode->size = i;
			newnode->next = NULL;

			tail->next = newnode;
			tail = newnode;
		}
		tail->next = NULL;

		SL* cur = s1->next;
		int max = 0;
		int num = 0;
		while (cur)
		{
			if (cur->val > max)
			{
				max = cur->val;
				num = cur->size;
			}
			cur = cur->next;
		}

		printf("max=%d num=%d", max, num);
		printf("\n");

		i = 0;
		free(s1);
		s1 = NULL;
		
	}


	/*SL* cur = s1->next;
	int max = 0;
	int num = 0;
	while (cur)
	{
		if (cur->val > max)
		{
			max = cur->val;
			num = cur->size;
		}
		cur = cur->next;
	}
	
	printf("max=%d num=%d", max, num);
	printf("\n");*/
	return 0;
}












