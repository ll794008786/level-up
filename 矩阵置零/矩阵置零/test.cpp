#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Solution {
public:
	void setZeroes(vector<vector<int>>& matrix) {
		int row = matrix.size();//��
		int column = matrix[0].size();//��
		queue<pair<int, int>> q;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				if (matrix[i][j] == 0)
					q.push(make_pair(i, j));//�洢ֵΪ0�ĵ������
			}
		}

		while (!q.empty())
		{
			auto t = q.front();
			q.pop();
			for (int i = 0; i < row; i++)
			{
				matrix[i][t.second] = 0;//��0��ͬһ�е�ֵ��0
			}
			for (int j = 0; j < column; j++)
			{
				matrix[t.first][j] = 0;//��0��ͬһ�е�ֵ��0
			}
		}
	}
};

