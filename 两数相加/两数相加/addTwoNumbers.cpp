#define _CRT_SECURE_NO_WARNINGS

#include"addTwoNumbers.h"

using namespace std;

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	int x, y, num, flag = 0;
	struct ListNode* p = l1;
	struct ListNode* q = l2;
	//创建一个新链表，并且初始化指向NULL
	struct ListNode* cur = (struct ListNode*)malloc(sizeof(struct ListNode));
	cur->next = NULL;
	//创建一个指向新链表的指针
	struct ListNode* ret = cur;
	while (p != NULL || q != NULL)
	{
		//判断两链表是否为NULL，不为NULL给相应变量赋值
		x = (p != NULL) ? p->val : 0;
		y = (q != NULL) ? q->val : 0;
		//相应位相加
		num = x + y + flag;
		//进位变量赋值
		flag = num / 10;
		//加长新链表，并将刚才得到的该位数值存入新链表节点
		cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		cur = cur->next;
		cur->val = num % 10;
		cur->next = NULL;
		//链表遍历
		if (p != NULL)
			p = p->next;
		if (q != NULL)
			q = q->next;
	}
	//判断首位是否有进位
	if (flag > 0)
	{
		cur->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		cur = cur->next;
		cur->val = flag;
		cur->next = NULL;
	}
	//通过指针访问
	return ret->next;
}