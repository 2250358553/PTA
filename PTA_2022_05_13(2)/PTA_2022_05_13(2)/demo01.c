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
//int main()
//{
//
//	while (1)
//	{
//		SL* s1 = (SL*)malloc(sizeof(SL));
//		SL* tail = s1;
//
//		int n = 0;
//		scanf("%d", &n);
//		if (n == 0)
//		{
//			break;
//		}
//		int k = n;
//
//		int data = 0;
//		while (n--)
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
//		//选择排序
//		SL* head = s1->next;
//		SL* sorttail = s1->next->next;
//		SL* cur = s1->next;
//		while (k--)
//		{
//			while (sorttail)
//			{
//				if (sorttail->val < cur->val)
//				{
//					cur = sorttail;
//				}
//				sorttail = sorttail->next;
//			}
//			//交换
//			int headval = head->val;
//			head->val = cur->val;
//			cur->val = headval;
//			//cur = head;
//			//复位
//			if (head->next != NULL)
//			{
//				head = head->next;
//				cur = head;
//				sorttail = head->next;
//			}
//			
//		}
//
//		//遍历输出
//		SL* res = s1->next;
//		while (res)
//		{
//			printf("%d", res->val);
//			if (res->next != NULL)
//			{
//				printf(" ");
//
//			}
//			res = res->next;
//		}
//		printf("\n");
//
//		free(s1);
//		s1 = NULL;
//	}
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
