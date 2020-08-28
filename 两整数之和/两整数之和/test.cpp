#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Solution{
public:
	int getSum(int a, int b)
	{
		while (b)
		{
			int carry = unsigned(a & b) << 1;
			a ^= b;
			b = carry;
		}
		return a;
	}
};