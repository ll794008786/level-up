#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

class Solution{
public:
	int Add(int num1, int num2)
	{
		int ans = num1;
		while (num2 != 0)
		{
			ans = num1 ^ num2;
			num2 = (num1 & num2) << 1;
			num1 = ans;
		}
		return ans;
	}
};