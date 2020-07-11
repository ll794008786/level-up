#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int n, m;
	int a[1024];

	while (cin >> n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		cin >> m;
		sort(a, a + n);

		for (int i = 1; i < n; i++)
		{
			if (a[i] > a[i - 1])
			{
				m--;
				if (m == 1)
				{
					cout << a[i] << endl;
					break;
				}
			}
		}
	}
	system("pause");
	return 0;
}