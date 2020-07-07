#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	while (cin >> n)
	{
		cout << n << " = ";
		for (int i = 2; i < n; i++)
		{
			while (n % i == 0 && i != n)
			{
				cout << i << " * ";
				n = n / i;
			}
		}
		cout << n << endl;
	}
	system("pause");
	return 0;
}