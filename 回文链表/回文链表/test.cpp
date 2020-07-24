#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int n) :val(n), next(nullptr){}
};

class Solution {
public:
	bool isPalindrome(ListNode* head) {
		vector<int> a;
		while (head)
		{
			a.push_back(head->val);
			head = head->next;
		}
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] != a[a.size() - 1 - i])
				return false;
		}
		return true;
	}
};