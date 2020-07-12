#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

class Solution
{
	bool isBSTUtil(struct TreeNode* root, long long& prev)
	{
		if (root)
		{
			if (!isBSTUtil(root->left, prev))
				return false;
			if (root->val <= prev)
				return false;
			prev = root->val;
			return isBSTUtil(root->right, prev);
		}
		return true;
	}
	public:
		bool isValidBST(TreeNode* root)
		{
			long long prev = LONG_MIN;
			return isBSTUtil(root, prev);
		}
};