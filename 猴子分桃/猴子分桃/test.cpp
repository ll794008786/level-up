#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n;
	long long a, b;
	while (cin >> n)
	{
		if (n == 0)
			break;
		else
		{
			a = pow(5, n) - 4;
			b = pow(4, n) + n - 4;
			cout << a << " " << b << endl;
		}
	}
	system("pause");
	return 0;
}