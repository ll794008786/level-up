#define _CRT_SECURE_NO_WARNINGS
#include"两有序链表之和.h"

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	//如果只有一个链表有值，直接返回其中一个链表
	if (l1 == nullptr) return l2;
	if (l2 == nullptr) return l1;
	//新建一个链表将两个链表的数据按大小排序导入新链表
	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode *t = head;
	//直到其中一个链表为空前判断两个链表的大小，然后将小的链表数据加入新建链表
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
	//将剩下的一个链表直接导入新链表
	if (l1 != nullptr) t->next = l1;
	if (l2 != nullptr) t->next = l2;
	//返回新链表，跳过头节点
	return head->next;
}