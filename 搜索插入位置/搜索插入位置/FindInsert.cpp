#define _CRT_SECURE_NO_WARNINGS
#include"FindInsert.h"

using namespace std;

int searchInsert(int* nums, int numsSize, int target)
{
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] >= target)
		{
			return i;
		}
	}
	return numsSize;
}