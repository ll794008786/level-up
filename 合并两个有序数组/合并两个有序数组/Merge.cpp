#define _CRT_SECURE_NO_WARNINGS

#include"Merge.h"

using namespace std;

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{ 
	if (nums1Size < m + n)
		return;
	int p = m - 1, q = n - 1, tail = m + n - 1;

	while (tail >= 0){
		if ((q <= -1 && p >= 0) || (p > -1 && nums1[p] >= nums2[q])){
			nums1[tail] = nums1[p];
			p--;
		}
		else{
			nums1[tail] = nums2[q];
			q--;
		}
		tail--;
	}
}

void printf(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}