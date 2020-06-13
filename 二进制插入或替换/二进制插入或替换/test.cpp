#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>

using namespace std;

int binInsert(int n, int m, int j, int i)
{
	vector<int> v1;
	vector<int> v2;

	int count = 0;
	while (n)
	{
		v1.push_back(n & 1);
		n = n >> 1;
	}
	while (m)
	{
		v2.push_back(m & 1);
		m = m >> 1;
	}
	for (int a = 0; a < v2.size(); a++)
	{
		v1[j++] = v2[a];
	}
	for (int b = 0; b < v1.size(); b++)
		count += v1[b] * pow(2, b);
	return count;
}

//int binInsert(int n, int m, int j, int i)
//{
//	m << j;
//	n = n | m;
//	return n;
//}

int main()
{
	int n = 0, m = 0, i = 0, j = 0;
	cin >> n >> m >> i >> j;
	int a = binInsert(n, m, i, j);
	cout << a << endl;
	system("pause");
	return 0;
}