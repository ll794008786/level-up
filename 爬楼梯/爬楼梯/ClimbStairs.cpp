#define _CRT_SECURE_NO_WARNINGS

#include"ClimbStairs.h"

using namespace std;

int _climb(int n, int *arr)
{
	if (arr[n] != 0) return arr[n];
	arr[n] = _climb(n - 1, arr) + _climb(n - 2, arr);
	return arr[n];
}
int climbStairs(int n)
{
	if (n < 0) return 0;
	if (n <= 2) return n;
	int *arr = (int *)calloc(n + 1, sizeof(int));
	arr[0] = 1;
	arr[1] = 2;
	return _climb(n, arr);
}