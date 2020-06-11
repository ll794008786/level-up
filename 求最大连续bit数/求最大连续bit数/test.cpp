#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int main()
{
	int n = 0;
	while (cin >> n)
	{
	cin >> n;
		int s = 0;
		int count = 0;
		while (n)
		{
			if ((n & 1) == 1)
			{
				++s;
				count = s > count ? s : count;
			}
			else
				s = 0;
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}