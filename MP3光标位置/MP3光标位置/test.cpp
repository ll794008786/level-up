#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

void Short(string str, int n)
{
	int initial = 1, current = 1;
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		if (str[i] == 'U')
		{
			if (current == 1)
				current = n;
			else
				current--;
		}
		else if (str[i] == 'D')
		{
			if (current == n)
				current = 1;
			else
				current++;
		}
	}
	for (int i = 1; i < n; i++)
	{
		cout << i << " ";
	}
	cout << n << endl;
	cout << current << endl;
}

void Long(string str, int n)
{
	int initial = 1, current = 1;
	int len = str.length();
	for (int i = 0; i < len; i++)
	{
		if (str[i] == 'U')
		{
			if (initial == 1 && current == 1)
			{
				current = n;
				initial = n - 3;
			}
			else if (initial == current)
			{
				current--;
				initial--;
			}
			else
			{
				current--;
			}
		}
		else if (str[i] == 'D')
		{
			if (initial == n - 3 && current == n)
			{
				current = 1;
				initial = 1;
			}
			else if (initial == current - 3)
			{
				current++;
				initial++;
			}
			else
			{
				current++;
			}
		}
	}
	for (int i = initial; i != initial + 3; i++)
	{
		cout << i << " ";
	}
	cout << initial + 3 << endl;
	cout << current << endl;
}

int main()
{
	int n;
	while (cin >> n)
	{
		string str;
		cin >> str;
		if (n <= 4)
			Short(str, n);
		else
			Long(str, n);
	}
	system("pause");
	return 0;
}