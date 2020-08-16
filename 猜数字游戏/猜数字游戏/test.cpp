#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution {
public:
	string getHint(string secret, string guess) {
		string res;
		int a = 0, b = 0;
		int hash[10] = { 0 };
		int n = secret.length();
		for (int i = 0; i < n; i++)
		{
			hash[secret[i] - '0']++;
			hash[guess[i] - '0']--;
			if (secret[i] == guess[i])
			{
				a++;
			}
		}
		int df = 0;
		for (int i = 0; i < 10; i++)
		{
			if (hash[i] > 0)
			{
				df += hash[i];
			}
		}
		b = n - a - df;
		res = to_string(a) + 'A' + to_string(b) + 'B';
		return res;
	}
};