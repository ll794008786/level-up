#define _CRT_SECURE_NO_WARNINGS

#include"Merge.h"

using namespace std;

void main()
{
	int a[] = { 1, 2, 3, 4, 0, 0, 0 };
	int b[] = { 2, 3, 5 };
	printf(a, 7);
	printf(b, 3);
	merge(a, 7, 4, b, 3, 3);
	printf(a, 7);
	system("pause");
}