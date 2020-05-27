#ifndef DELETEDUPLICATES_H
#define DELETEDUPLICATES_H

#include<iostream>

using namespace std;

struct ListNode{
	int val;
	struct ListNode* next;
};

struct ListNode* deleteDuplicates(struct ListNode* head);


#endif