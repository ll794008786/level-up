#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int Count(int n)
{
	int sum = 0;
	while (n >= 2)
	{
		if (n == 2)
		{
			sum += 1;
			break;
		}
		int ret = n / 3;
		sum += ret;
		n = n % 3 + ret;
	}
	return sum;
}

int main()
{
	int n = 0;
	while (cin >> n)
	{
		cout << Count(n) << endl;
	}
	system("pause");
	return 0;
}