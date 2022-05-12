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
    //��һ������Ϊ��ֱ�ӷ��صڶ�������
    if (list1 == NULL)
    {
        return list2;
    }
     
    //�ڶ�������Ϊ��ֱ�ӷ��ص�һ������
    if (list2 == NULL)
    {
        return list1;
    }

    //�����½ڵ��ͷ��β
    SL* head = NULL;
    SL* tail = NULL;

    //��������Ϊ�ս���ѭ����ֻҪһ��Ϊ�վͽ���ѭ��
    while (list1 && list2)
    {
        //�ж���������ǰ�ڵ������ݵĴ�С
        if (list1->val < list2->val)
        {
            //��һ�ν�����ѡһ��ͷ�ڵ�
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
            //��һ�ν�����ѡһ��ͷ�ڵ�
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

//�����µĽڵ�
SL* CreatNewSList(int x)
{
    //��̬�����½ڵ�
    SL* newnode = (SL*)malloc(sizeof(SL));
    if (newnode == NULL)
    {
        printf("malloc ʧ�ܣ�");
        exit(-1);
    }
    //��������ݴ����½ڵ����������
    newnode->val = x;
    //�½ڵ��nextָ���
    newnode->next = NULL;
    return newnode;
}

//β��
void SListPushBack(SL** ppnext, int x)
{
    //�ȿ���һ��ռ�
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

    ////�ж�ͷ�ڵ��ǲ���Ϊ��
    //if (*ppnext == NULL)
    //{
    //    *ppnext = newnode;
    //}
    //else
    //{
    //    //����һ���ṹ��ָ�����͵ı������ͷ�ڵ�
    //    SL* backups = *ppnext;
    //    //����������һ���ڵ㣬ֱ���ߵ����һ���ڵ�Ϊֹ
    //    while (backups->next != NULL)
    //    {
    //        backups = backups->next;
    //    }
    //    //���һ���ڵ��next����½ڵ�ĵ�ַ
    //    backups->next = newnode;
    //}

    

}


int main()
{
    //������һ������
    int count1 = 0;
    int k1 = 0;
    //scanf("%d", &count1);//��ȡ������������ݸ���

    SL* s1 = (SL*)malloc(sizeof(SL));
   
        //SL* s1tail = s1;
    scanf("%d", &count1);//���λ�ȡ��������ݴ�ŵ���ǰ�ڵ���
    SListPushBack(&s1,count1);
    
    
    //������һ������
    int count2 = 0;
    //int k1 = 0;
    //scanf("%d", &count1);//��ȡ������������ݸ���

    SL* s2 = (SL*)malloc(sizeof(SL));

    //SL* s1tail = s1;
    scanf("%d", &count2);//���λ�ȡ��������ݴ�ŵ���ǰ�ڵ���
    SListPushBack(&s2, count2);



    ////�����ڶ�������
    //int count2 = 0;
    //int k2 = 0;
    //scanf("%d", &count2); //��ȡ������������ݸ���

    //SL* s2 = NULL;
    //while (count2--)
    //{
    //    scanf("%d", &k2);//���λ�ȡ��������ݴ�ŵ���ǰ�ڵ���
    //    SListPushBack(&s2, k2);
    //}

    //������������ϲ��ķ���
    SL* head = mergeTwoList(s1,s2);

    //������������е�����
    while (head)
    {
        printf("%d ", head->val);
        head = head->next;
    }
	return 0;
}