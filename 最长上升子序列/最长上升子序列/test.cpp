#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#define N 1020

int dp[N], a[N];
int max(int i, int j);
int main(void)
{
	int n, i, j, longest;
	while (scanf("%d", &n) != EOF)
	{
		longest = 1;
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &a[i]);
			dp[i] = 1;
		}
		for (i = 2; i <= n; i++)
		{
			for (j = 1; j<i; j++)
			if (a[i]>a[j])
				dp[i] = max(dp[j] + 1, dp[i]);
			longest = max(dp[i], longest);
		}
		printf("%d\n", longest);
	}

}
int max(int i, int j)
{
	if (i>j)
		return i;
	return j;
}