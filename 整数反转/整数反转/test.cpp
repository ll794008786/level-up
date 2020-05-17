#define _CRT_SECURE_NO_WARNINGS
#include"整数反转.h"

int main()
{
	cout << "注意！！！仅限整数！！！" << endl;
	while (1){
		int x = 0;
		cin >> x;
		int result = reverse(x);
		cout << result << endl;
	}
	system("pause");
}