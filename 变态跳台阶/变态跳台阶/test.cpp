#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Solution
{
	int jumpFloorII(int number)
	{
		if (number == 0) return 1;
		if (number == 1) return 1;
		if (number == 2) return 2;
		if (number > 2)
		{
			int res = 0;
			for (int i = 0; i < number; i++)
			{
				res += jumpFloorII(i);
			}
			return res;
		}
		else return -1;
	}
};