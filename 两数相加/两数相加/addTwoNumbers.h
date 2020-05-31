#ifndef ADDTWONUMBERS_H
#define ADDTWONUMBERS_H

#include<iostream>

struct ListNode{
	int val;
	struct ListNode* next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);

#endif