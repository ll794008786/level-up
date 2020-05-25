#ifndef SAMETREE_H
#define SAMETREE_H

#include<iostream>

using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	
};

bool isSameTree(struct TreeNode* p, struct TreeNode* q);

#endif