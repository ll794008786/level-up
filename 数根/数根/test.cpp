#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

int NumRoot(int num)
{
	int sum = 0;
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	while (sum > 9)
	{
		sum = NumRoot(sum);
	}
	return sum;
}

int main()
{
	string num;
	while (cin >> num)
	{
		int sum = 0;
		for (int i = 0; i < num.size(); i++)
		{
			sum += num[i] - '0';
		}
		cout << NumRoot(sum) << endl;
	}
	system("pause");
	return 0;
}