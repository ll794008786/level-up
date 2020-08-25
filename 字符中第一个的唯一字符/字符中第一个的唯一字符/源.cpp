#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class Solution
{
	int firstUniqChar(string s)
	{
		int count[256] = { 0 };
		int sz = s.size();
		for (int i = 0; i < sz; i++)
		{
			count[s[i]]++;
		}

		for (int i = 0; i < sz; i++)
		{
			if (count[s[i]] == 1)
				return i;
		}

		return -1;
	}
};