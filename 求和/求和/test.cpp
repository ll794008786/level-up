#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;

int dfs(int n, int k, int m, vector<int>& res)
{
	if (((k + n) * (n - k + 1) / 2) < m)
		return 0;
	if (m == 0)
	{
		for (int i = 0; i < res.size() - 1; i++)
		{
			cout << res[i] << " ";
		}
		cout << res[res.size() - 1] << endl;
	}
	for (int i = k; i <= n; i++)
	{
		if (i == m || i < m - 1)
		{
			res.push_back(i);
			dfs(n, i + 1, m - i, res);
			res.pop_back();
		}
	}
	return 0;
}

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> res;
	dfs(n, 1, m, res);
	system("pause");
	return 0;
}