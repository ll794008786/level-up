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
		cout << "��Ҫ���������Ϊ��" << i << endl;
		int aim = searchInsert(nums, 5, i);
		cout << "Ӧ�ò����λ��Ϊ��" << aim << endl;
	}
	system("pause");
}