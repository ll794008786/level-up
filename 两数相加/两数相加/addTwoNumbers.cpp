#define _CRT_SECURE_NO_WARNINGS

#include"addTwoNumbers.h"

using namespace std;

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	int x, y, num, flag = 0;
	struct ListNode* p = l1;
	struct ListNode* q = l2;
	//����һ�����������ҳ�ʼ��ָ��NULL
	struct ListNode* cur = (struct ListNode*)malloc(sizeof(struct ListNode));
	cur->next = NULL;
	//����һ��ָ���������ָ��
	struct ListNode* ret = cur;
	while (p != NULL || q != NULL)
	{
		//�ж��������Ƿ�ΪNULL����ΪNULL����Ӧ������ֵ
		x = (p != NULL) ? p->val : 0;
		y = (q != NULL) ? q->val : 0;
		//��Ӧλ���
		num = x + y + flag;
		//��λ������ֵ
		flag = num / 10;
		//�ӳ������������ղŵõ��ĸ�λ��ֵ����������ڵ�
		cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		cur = cur->next;
		cur->val = num % 10;
		cur->next = NULL;
		//�������
		if (p != NULL)
			p = p->next;
		if (q != NULL)
			q = q->next;
	}
	//�ж���λ�Ƿ��н�λ
	if (flag > 0)
	{
		cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		cur = cur->next;
		cur->val = flag;
		cur->next = NULL;
	}
	//ͨ��ָ�����
	return ret->next;
}