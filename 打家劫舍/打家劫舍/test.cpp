#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution{
public:
	int rob(vector<int>& nums)
	{
		int first = 0;
		int second = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (i % 2 == 0)
			{
				first += nums[i];
				first = max(first, second);
			}
			else
			{
				second += nums[i];
				second = max(first, second);
			}
		}
		return max(first, second);
	}
};