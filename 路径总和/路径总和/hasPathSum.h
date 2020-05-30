#ifndef HASPATHSUM_H
#define HASPATHSUM_H

#include<iostream>

using namespace std;

struct TreeNode{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
};

bool hasPathSum(struct TreeNode* root, int sum);

#endif