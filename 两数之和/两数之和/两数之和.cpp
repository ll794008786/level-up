#define _CRT_SECURE_NO_WARNINGS
#include<iostream>


int* twoSum(int* nums, int numsSize, int target, int* returnSize){
	int *result = (int*)malloc(sizeof(int) * 2);
	int first = 0;
	while (first != numsSize - 1)
	{
		int second = first + 1;
		for (second; second < numsSize; second++)
		{
			if ((nums[first] + nums[second]) == target)
			{
				result[0] = first;
				result[1] = second;
				*returnSize = 2;
				return result;
			}
		}
		first++;
	}
	return result;
}