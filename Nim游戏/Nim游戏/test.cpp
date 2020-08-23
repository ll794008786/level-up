#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Solution
{
	bool canWinNim(int n)
	{
		if (n % 4 == 0) return false;
		return true;
	}
};