#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void InsertSort(int* a, int n)
{
	assert(a);
	int end;
	for (end = 0; end < n; end++)
	{
		int tmp = a[end + 1];
		while (end >= 0 && a[end] > tmp)
		{
			a[end + 1] = a[end--];
		}
		a[end + 1] = tmp;
	}
}

void ShellSort(int* a, int n)
{
	int gap = 3;
	int i;
	int num;
	//for (; gap >= 1; gap -= num)// 预排序的次数
	//for (num = 0; num < gap; num++)//预排序的组别
	for (i = 0; i < n - gap; i++)
	{
		int end = i;
		int tmp = a[end + gap];
		while (end >= 0 && a[end] > tmp)
		{
			a[end + gap] = a[end];
			end -= gap;
		}
		a[end + gap] = tmp;
	}
}

void PrintfArray(int* a, int n)//打印函数
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void ShiftDown(int* a, int n, int root)
{
	int child = root * 2 + 1;
}

void HeapSort(int* a, int n)
{

}

void BubbleSort(int* a, int n)
{

}

void ArrayCreat()
{
	int a[] = {5, 2, 4, 6, 1, 3};

}

int main()
{
	ArrayCreat();
	InsertSort(a, n);
	PrintfArray(a, n);
}