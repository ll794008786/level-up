#define _CRT_SECURE_NO_WARNINGS
#include"整数反转.h"

int reverse(int x){
	int ret = 0;
	int i = x;
	while (i)
	{
		ret = (ret * 10) + (i % 10);
		i /= 10;
	}
	if (ret < INT_MIN || ret >INT_MAX)
	{
		return 0;
	}
	return ret;
}
