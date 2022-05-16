//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct List
//{
//	int val;
//	struct List* next;
//}SL;
//
//
//int main()
//{
//	//SL* s1 = (SL*)malloc(sizeof(SL));
//	//SL* tail = s1;
//
//	while (1)
//	{
//		int count = 0;
//		scanf("%d", &count);
//
//		if (count == 0)
//		{
//			exit(-1);
//		}
//
//		SL* s1 = (SL*)malloc(sizeof(SL));
//		SL* tail = s1;
//
//		int data = 0;
//
//		while (count--)
//		{
//			SL* newnode = (SL*)malloc(sizeof(SL));
//			scanf("%d", &data);
//			newnode->val = data;
//			newnode->next = NULL;
//
//			tail->next = newnode;
//			tail = newnode;
//		}
//		tail->next = NULL;
//
//		int a = 0;
//		int b = 0;
//		scanf("%d", &a);
//		scanf("%d", &b);
//
//
//		//ÅÅÐò
//		SL* sorttail = s1->next;
//		while (sorttail)
//		{
//			if (sorttail->val > a && sorttail->val < b)
//			{
//				;
//			}
//			else
//			{
//				printf("%d", sorttail->val);
//				if (sorttail->next != NULL)
//				{
//					printf(" ");
//				}
//			}
//			sorttail = sorttail->next;
//		}
//		free(s1);
//		s1 = NULL;
//	}
//
//
//	return 0;
//}
