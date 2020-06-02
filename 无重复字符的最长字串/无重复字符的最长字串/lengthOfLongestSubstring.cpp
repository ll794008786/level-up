#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

class solution{
public:
	int lengthOfLongestSubstring(string s){
		int res = 0, i = 0, j = 0;
		vector<int> idx(128, -1);
		while (j < s.size())
		{
			if (idx[s[j]] >= i)
			{
				res = max(res, j - i);
				i = idx[s[j]] + 1;
			}
			idx[s[j++]] = j;
		}
		res = max(res, j - i);
		return res;
	}
};
