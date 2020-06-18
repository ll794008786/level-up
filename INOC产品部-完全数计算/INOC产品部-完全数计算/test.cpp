#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>

using namespace std;

bool isDivisor(int num)
{
	int sum = 0;
	for (int i = 1; i <= num / 2; i++)
	{
		if (num % i == 0)
			sum += i;
	}
	if (sum == num)
		return true;
	return false;
}

int getNum(int n)
{
	int count = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (isDivisor(i))
			count++;
	}
	return count;
}

int main()
{
	int n;
	while (cin >> n)
	{
		cout << getNum(n) << endl;
	}
	system("pause");
	return 0;
}