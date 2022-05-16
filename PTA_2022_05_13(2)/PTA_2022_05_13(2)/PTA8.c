//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//struct ListNode
//{
//    int val;
//    struct ListNode* next;
//};
//
//struct ListNode* reverseList(struct ListNode* head)
//{
//
//    struct ListNode* cur = head;
//    struct ListNode* prev = NULL;
//
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        cur->next = prev;
//        prev = cur;
//        cur = next;
//    }
//    return prev;
//
//}
//
//
//int main()
//{
//    struct ListNode* s1 = (struct ListNode*)malloc(sizeof(struct ListNode));
//    struct ListNode* tail = s1;
//
//    int count = 0;
//    scanf("%d", &count);
//    int data = 0;
//
//    while (count--)
//    {
//        struct ListNode* newnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//        scanf("%d", &data);
//        newnode->val = data;
//        newnode->next = NULL;
//        
//        tail->next = newnode;
//        tail = newnode;
//    }
//    tail->next = NULL;
//
//    struct ListNode* newhead = s1->next;
//    struct ListNode* newList = reverseList(newhead);
//
//    while (newList)
//    {
//        printf("%d", newList->val);
//        if (newList->next != NULL)
//        {
//            printf(" ");
//        }
//        newList = newList->next;
//    }
//    printf("\n");
//
//    return 0;
//}
//
//
