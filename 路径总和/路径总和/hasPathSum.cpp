#define _CRT_SECURE_NO_WARNINGS

#include"hasPathSum.h"

using namespace std;

bool hasPathSum(struct TreeNode* root, int sum){
	if (root == NULL)
	{
		return false;
	}
	if ((root->left == NULL) && (root->right == NULL) && (root->val == sum))
	{
		return true;
	}
	return hasPathSum(root->left, sum - root->val) + hasPathSum(root->right, sum - root->val);
}