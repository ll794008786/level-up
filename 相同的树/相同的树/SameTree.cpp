#define _CRT_SECURE_NO_WARNINGS

#include"SameTree.h"

using namespace std;

bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
	if (p == NULL && q == NULL)
	{
		return true;
	}
	else if (p != NULL && q == NULL)
	{
		return false;
	}
	else if (p == NULL && q != NULL)
	{
		return false;
	}
	else
	{
		if (p->val != q->val)
		{
			return false;
		}
		else
		{
			return (isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
		}
	}
}