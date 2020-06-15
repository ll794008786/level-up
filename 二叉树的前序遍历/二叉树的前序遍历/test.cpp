#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<stack>

using namespace std;

 struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 class Solution {
 public:
	 vector<int> preorderTraversal(TreeNode* root){
		 vector<int> ret;
		 stack<TreeNode*> st;

		 TreeNode* cur = root;

		 while (cur || !st.empty())
		 {
			 while (cur)
			 {
				 ret.push_back(cur->val);
				 st.push(cur);
				 cur = cur->left;
			 }
			
			TreeNode* top = st.top();
			st.pop();
			cur = top->right;
		 }

		 return ret;
	 }
 };