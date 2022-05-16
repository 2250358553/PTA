//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}SL;
//
//
//int main()
//{
//	SL* s1 = (SL*)malloc(sizeof(SL));
//	SL* tail = s1;
//	int data = 0;
//
//	while (1)
//	{
//		int count = 0;
//		scanf("%d", &count);
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
//
//		//Êä³ö
//		SL* head = s1->next;
//		while (head)
//		{
//			printf("%d", head->val);
//			if (head->next != NULL)
//			{
//				printf(" ");
//			}
//			head = head->next;
//		}
//		printf("\n");
//
//		free(s1);
//		s1 = NULL;
//	}
//	return 0;
//}