#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

int main()
{
	int n, m, k;
	while (cin >> n >> m >> k)
	{
		vector<vector<int>> Lawn((n + 1), vector<int>(m + 1));
		vector<vector<double>> Ret((n + 1), vector<double>(m + 1));
		for (size_t i = 0; i < k; ++i)
		{
			int x, y;
			cin >> x >> y;
			Lawn[x][y] = 1;
		}
		Ret[1][1] = 1.0;
		for (size_t i = 1; i < n + 1; ++i)
		{
			for (size_t j = 1; j < m + 1; ++j)
			{
				if (1 == Lawn[i][j])
				{
					Ret[i][j] = 0;
					continue;
				}
				if (!(1 == i && 1 == j))
				{
					Ret[i][j] = Ret[i - 1][j] * (j == m ? 1.0 : 0.5) + Ret[i][j - 1] * (i == n ? 1.0 : 0.5);
				}
			}
		}
		cout << fixed << setprecision(2) << Ret[n][m] << endl;
	}
	return 0;
}