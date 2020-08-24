#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution
{
public:
	vector<vector<int>> subsetsWithDup(vector<int>& nums)
	{
		map<int, int> num;
		for (int i = 0; i < nums.size(); i++)
		{
			num[nums[i]]++;
		}

		vector<vector<int>> res = { {} };
		vector<int> subset;

		for (auto i : num)
		{
			int tmp = res.size();

			for (int m = 0; m < tmp; m++)
			{
				subset = res[m];

				for (int k = 1; k <= i.second; k++)
				{
					subset.push_back(i.first);
					res.push_back(subset);
				}
			}
		}
		return res;
	}
}
;