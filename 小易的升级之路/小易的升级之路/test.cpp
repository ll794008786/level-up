#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>

using namespace std;

int ConNum(int b, int c)//求最大公约数
{
	int ret = 0;
	for (int i = 1; i <= b; i++)
	{
		if (b % i == 0 && c % i == 0)
			ret = i;
	}
	return ret;
}

int main()
{
	int n, a;
	while (cin >> n >> a)
	{
		vector<int> v(n);
		for (size_t i = 0; i < v.size(); i++)
		{
			cin >> v[i];
		}
		for (size_t i = 0; i < v.size(); i++)
		{
			if (a > v[i])
				a += v[i];
			else
				a += ConNum(v[i], a);
		}
		cout << a << endl;
	}
	system("pause");
	return 0;
}