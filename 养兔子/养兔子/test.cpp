#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		long long d1 = 0;
		long long d2 = 1;
		long long d3;
		for (size_t i = 0; i < n; i++)
		{
			d3 = d1 + d2;
			d1 = d2;
			d2 = d3;
		}
		cout << d2 << endl;
	}
	system("pause");
	return 0;
}