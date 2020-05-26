#define _CRT_SECURE_NO_WARNINGS

#include"IsSymmetric.h"
using namespace std;

bool IsSym(struct TreeNode* a, struct TreeNode* b)
{
	if (!a && !b)
		return true;
	if ((!a && b) || (a && !b))
		return false;
	return a->val == b->val && IsSym(a->left, b->right) && IsSym(a->right, b->left);
}


bool isSymmetric(struct TreeNode* root)
{
	if (!root)
		return true;
	return IsSym(root->left, root->right);
}
