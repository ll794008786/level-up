#define _CRT_SECURE_NO_WARNINGS
#include"FindInsert.h"

using namespace std;

int main()
{
	int nums[] = { 0, 1, 2, 3, 4 };
	while (1)
	{
		int i = 0;
		cin >> i;
		cout << "需要插入的数据为：" << i << endl;
		int aim = searchInsert(nums, 5, i);
		cout << "应该插入的位置为：" << aim << endl;
	}
	system("pause");
}