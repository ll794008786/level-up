#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
#include<string.h>

using namespace std;

int a[10][10] = { 0 };
char c[10][10];

int BFS(int x_0, int y_0)
{
	queue<pair<int, int>> q;

	q.push(make_pair(x_0, y_0));
	int x, y;
	while (1)
	{
		x = q.front().first;
		y = q.front().second;
		q.pop();
		if (x == 9 && y == 8)
			return a[9][8];
		if (x - 1 >= 0 && x - 1 < 9 && y >= 0 && y <= 9 && a[x - 1][y] == 0 && c[x][y] != '#')
		{
			a[x - 1][y] = a[x][y] + 1;
			q.push(make_pair(x - 1, y));
		}
		if (x + 1 >= 0 && x + 1 < 9 && y >= 0 && y <= 9 && a[x + 1][y] == 0 && c[x][y] != '#')
		{
			a[x + 1][y] = a[x][y] + 1;
			q.push(make_pair(x + 1, y));
		}
		if (y - 1 >= 0 && y - 1 < 9 && x >= 0 && x <= 9 && a[x][y - 1] == 0 && c[x][y] != '#')
		{
			a[x][y - 1] = a[x][y] + 1;
			q.push(make_pair(x, y - 1));
		}
		if (y + 1 >= 0 && y + 1 < 9 && x >= 0 && x <= 9 && a[x][y + 1] == 0 && c[x][y] != '#')
		{
			a[x][y + 1] = a[x][y] + 1;
			q.push(make_pair(x, y + 1));
		}
	}
}

int main()
{
	while (cin >> c[0][0])
	{
		for (int i = 1; i < 10; i++)
		{
			cin >> c[0][i];
		}
		memset(a, 0, sizeof(a));

		for (int i = 1; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cin >> c[i][j];
			}
		}
		cout << BFS(0, 1) << endl;
	}
	system("pause");
	return 0;
}