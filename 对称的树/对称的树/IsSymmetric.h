#ifndef ISSYMMETRIC_H
#define ISSYMMETRIC_H

#include<iostream>
using namespace std;

struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
};

bool IsSym(struct TreeNode* a, struct TreeNode* b);
bool isSymmetric(struct TreeNode* root);

#endif