#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct ListNode
{
     int val;
     struct ListNode* next;
}SL;


SL* mergeTwoList(SL* list1, SL* list2)
{
    //第一个链表为空直接返回第二个链表
    if (list1 == NULL)
    {
        return list2;
    }
     
    //第二个链表为空直接返回第一个链表
    if (list2 == NULL)
    {
        return list1;
    }

    //创建新节点的头和尾
    SL* head = NULL;
    SL* tail = NULL;

    //两个都不为空进入循环，只要一个为空就结束循环
    while (list1 && list2)
    {
        //判断两个链表当前节点中数据的大小
        if (list1->val < list2->val)
        {
            //第一次进来先选一个头节点
            if (head == NULL)
            {
                head = tail = list1;
            }
            else
            {
                tail->next = list1;
                tail = list1;
            }
            list1 = list1->next;
        }
        else
        {
            //第一次进来先选一个头节点
            if (head == NULL)
            {
                head = tail = list2;
            }
            else
            {
                tail->next = list2;
                tail = list2;
            }
            list2 = list2->next;
        }
    }

    if (list1)
    {
        tail->next = list1;
    }

    if (list2)
    {
        tail->next = list2;
    }
    return head->next->next;
}

//开辟新的节点
SL* CreatNewSList(int x)
{
    //动态开辟新节点
    SL* newnode = (SL*)malloc(sizeof(SL));
    if (newnode == NULL)
    {
        printf("malloc 失败！");
        exit(-1);
    }
    //输入的数据存入新节点的数据域中
    newnode->val = x;
    //新节点的next指向空
    newnode->next = NULL;
    return newnode;
}

//尾插
void SListPushBack(SL** ppnext, int x)
{
    //先开辟一块空间
    int k = 0;
    SL* tail = *ppnext;
    while (x--)
    {
        scanf("%d", &k);
        SL* newnode = CreatNewSList(k);

        tail->next = newnode;
        tail = newnode;
    }
    tail->next = NULL;

    ////判断头节点是不是为空
    //if (*ppnext == NULL)
    //{
    //    *ppnext = newnode;
    //}
    //else
    //{
    //    //创建一个结构体指针类型的变量存放头节点
    //    SL* backups = *ppnext;
    //    //往后走向下一个节点，直到走到最后一个节点为止
    //    while (backups->next != NULL)
    //    {
    //        backups = backups->next;
    //    }
    //    //最后一个节点的next存放新节点的地址
    //    backups->next = newnode;
    //}

    

}


int main()
{
    //创建第一个链表
    int count1 = 0;
    int k1 = 0;
    //scanf("%d", &count1);//获取输入的链表数据个数

    SL* s1 = (SL*)malloc(sizeof(SL));
   
        //SL* s1tail = s1;
    scanf("%d", &count1);//依次获取输入的数据存放到当前节点中
    SListPushBack(&s1,count1);
    
    
    //创建第一个链表
    int count2 = 0;
    //int k1 = 0;
    //scanf("%d", &count1);//获取输入的链表数据个数

    SL* s2 = (SL*)malloc(sizeof(SL));

    //SL* s1tail = s1;
    scanf("%d", &count2);//依次获取输入的数据存放到当前节点中
    SListPushBack(&s2, count2);



    ////创建第二个链表
    //int count2 = 0;
    //int k2 = 0;
    //scanf("%d", &count2); //获取输入的链表数据个数

    //SL* s2 = NULL;
    //while (count2--)
    //{
    //    scanf("%d", &k2);//依次获取输入的数据存放到当前节点中
    //    SListPushBack(&s2, k2);
    //}

    //调用两个链表合并的方法
    SL* head = mergeTwoList(s1,s2);

    //遍历输出链表中的数据
    while (head)
    {
        printf("%d ", head->val);
        head = head->next;
    }
	return 0;
}