#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
		{
			printf("%d\t", i);
		}
		if (i % 400 == 0)
		{
			printf("%d\t", i);
		}
	}
	system("pause");
	return 0;
}