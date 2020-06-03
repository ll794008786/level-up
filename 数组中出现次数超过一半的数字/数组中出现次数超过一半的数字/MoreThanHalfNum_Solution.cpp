#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>

using namespace std;

class Solution{
public:
	int MoreThanHalfNum_Solution(vector<int> numbers){
		int len = numbers.size();
		if (len == 0)
		{
			return 0;
		}
		int x = numbers[0], count = 0;
		for (int i = 0; i < len; i++)
		{
			if (numbers[i] == x)
			{
				count++;
			}
			else{
				if (count == 1)
				{
					x = numbers[i];
				}
				else
				{
					count--;
				}
			}
		}
		count = 0;
		for (int i = 0; i < len; i++)
		{
			if (numbers[i] == x)
				count++;
		}
		return (count * 2) > len ? x : 0;
	}
};