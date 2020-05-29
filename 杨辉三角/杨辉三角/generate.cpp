#define _CRT_SECURE_NO_WARNINGS

#include"generate.h"

using namespace std;

int** generate(int numRows, int* returnSize, int** returnColumnSizes){
	int **res = (int **)calloc(numRows, sizeof(int *));
	int i, j;
	
	*returnSize = numRows;
	*returnColumnSizes = (int *)calloc(numRows, sizeof(int *));

	for (i = 0; i < numRows; i++)
	{
		res[i] = (int *)calloc(i + 1, sizeof(int ));
		for (j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
			{
				res[i][j] = 1;
			}
			else
			{
				res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
			}
		}
		(*returnColumnSizes)[i] = i + 1;
	}
	return res;
}