#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<stdlib.h>
#include<vector>
#include<string>

using namespace std;

bool IsE(vector<string> v)//是否按字典进行排序
{ 
	for (int i = 0; i < v.size() - 1; i++)
	{
		if (v[i] > v[i + 1])
			return false;
	}
	return true;
}

bool IsL(vector<string> v)//判断是否按长度进行排序
{
	for (int i = 0; i < v.size() - 1; i++)
	{
		if (v[i].size() > v[i + 1].size())
			return false;
	}
	return true;
}

int main()
{
	vector<string> v;
	int n = 0;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		v.push_back(s);
	}
	if (IsE(v) && IsL(v))
		cout << "both" << endl;
	else if (IsE(v) && !IsL(v))
		cout << "lexicographically" << endl;
	else if (!IsE(v) && IsL(v))
		cout << "lengths" << endl;
	else
		cout << "none" << endl;

	system("pause");
	return 0;
}