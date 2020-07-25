#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL){}
};

class Solution{
public:
	ListNode *removeElements(ListNode *head, int val)
	{
		if (!head)
			return nullptr;
		ListNode *p = head;
		while (p->next)
		{
			if (p->next->val == val)
				p->next = p->next->next;
			else
				p = p->next;
		}
		return head->val == val ? head->next : head;
	}
};