#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i;
	for (n = 100; n <= 200;n++)
	{
		for (i = 2; i <= n - 1;i++)
		{
			if (n%i == 0) break;
			if (i >= n - 1)
				printf("%d\n", n);
		}
	}
	system("pause");
	return 0;
}
