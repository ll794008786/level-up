#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main()
{
	int n;
	long long a[21] = { 0, 0, 1 }, b[21] = { 1, 1, 2 };
	while (cin >> n)
	{
		for (int i = 3; i <= n; i++)
		{
			b[i] = i * b[i - 1];
			a[i] = (i - 1) * (a[i - 1] + a[i - 2]);
		}
		printf("%.2f%c", 1.0 * a[n] / b[n] * 100, '%');
		cout << endl;
	}
	system("pause");
	return 0;
}