#define _CRT_SECURE_NO_WARNINGS

#include"DeleteDuplicates.h"

using namespace std;

struct ListNode* deleteDuplicates(struct ListNode* head)
{
	struct ListNode* p;
	p = head;
	while (p != NULL && p->next != NULL)
	{
		if (p->val == p->next->val)
		{
			p->next = p->next->next;
		}
		else
		{
			p = p->next;
		}
	}
	return head;
}