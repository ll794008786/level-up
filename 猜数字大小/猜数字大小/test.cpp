#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Solution {
public:
	int guessNumber(int n) {
		int i = 1, j = n;
		int k;
		while (i <= j)
		{
			k = i + (j - i) / 2;
			if (guess(k) == 0)
				return k;
			else
			if (guess(k) == 1)
				i = k + 1;
			else
				j = k - 1;
		}
		return -1;
	}
};
