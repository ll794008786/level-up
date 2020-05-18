#define _CRT_SECURE_NO_WARNINGS
#include"����������֮��.h"

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	//���ֻ��һ��������ֵ��ֱ�ӷ�������һ������
	if (l1 == nullptr) return l2;
	if (l2 == nullptr) return l1;
	//�½�һ������������������ݰ���С������������
	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode *t = head;
	//ֱ������һ������Ϊ��ǰ�ж���������Ĵ�С��Ȼ��С���������ݼ����½�����
	while (l1->next != nullptr && l2->next != nullptr)
	{
		if (l1->val < l2->val)
		{
			t->next = l1;
			l1 = l1->next;
		}
		else
		{
			t->next = l2;
			l2 = l2->next;
		}
		t = t->next;
	}
	//��ʣ�µ�һ������ֱ�ӵ���������
	if (l1 != nullptr) t->next = l1;
	if (l2 != nullptr) t->next = l2;
	//��������������ͷ�ڵ�
	return head->next;
}