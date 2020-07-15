#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	long long res[21] = { 0, 0, 1 };
	for (int i = 3; i < 21; i++)
	{
		res[i] = (i - 1) * (res[i - 1] + res[i - 2]);
	}
	int n;
	while (cin >> n)
	{
		cout << res[n] << endl;
	}
	system("pause");
	return 0;
}