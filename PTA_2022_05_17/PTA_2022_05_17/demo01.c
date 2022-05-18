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
//	while (1)
//	{
//		int count = 0;
//		scanf("%d", &count);
//		int k = count;
//
//		if (count == 0)
//		{
//			break;
//		}
//
//		SL* s1 = (SL*)malloc(sizeof(SL));
//		SL* tail = s1;
//
//		while (count--)
//		{
//			SL* newnode = (SL*)malloc(sizeof(SL));
//			scanf("%d", &newnode->val);
//			newnode->next = NULL;
//
//			tail->next = newnode;
//			tail = newnode;
//		}
//		tail->next = NULL;
//
//		//输出
//		//SL* cur = s1->next;
//		//SL* next = s1->next->next;
//		//SL* head = s1->next;
//		//while (k--)
//		//{
//		//	int n = 0;
//		//	while (next)
//		//	{
//		//		if (cur->val > next->val)
//		//		{
//		//			n++;
//		//		}
//		//		//cur = cur->next;
//		//		next = next->next;
//		//	}
//		//	head = head->next;
//		//	cur = head;
//		//	next = s1->next;
//		//	printf("%d ", n);
//		//}
//		//printf("\n");
//
//		//输出
//
//
//		//销毁链表
//		free(s1);
//		s1 = NULL;
//	}
//
//}

