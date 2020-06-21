#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {};
};

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* dummy = new ListNode(NULL);
		dummy->next = head;
		ListNode* slow = dummy, *fast = dummy;
		int distance = 0;
		while (fast->next)
		{
			if (distance < n)
			{
				fast = fast->next;
				distance++;
			}
			else{
				fast = fast->next;
				slow = slow->next;
			}
		}
		slow->next = slow->next->next;
		return dummy->next;
	}
};
