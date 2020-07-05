#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Solution {
public:
	void setZeroes(vector<vector<int>>& matrix) {
		int row = matrix.size();//行
		int column = matrix[0].size();//列
		queue<pair<int, int>> q;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				if (matrix[i][j] == 0)
					q.push(make_pair(i, j));//存储值为0的点的坐标
			}
		}

		while (!q.empty())
		{
			auto t = q.front();
			q.pop();
			for (int i = 0; i < row; i++)
			{
				matrix[i][t.second] = 0;//与0在同一行的值置0
			}
			for (int j = 0; j < column; j++)
			{
				matrix[t.first][j] = 0;//与0在同一列的值置0
			}
		}
	}
};

