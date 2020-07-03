#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		int ans = 0;
		long long sum = 1;
		while (sum < n)
		{
			sum *= 3;
			ans++;
		}
		cout << ans << endl;
	}
	system("pause");
	return 0;
}