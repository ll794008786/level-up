#define _CRT_SECURE_NO_WARNINGS

#include<iostream>

using namespace std;

int addAB(int A, int B)
{
	int sum = 0, carry = 0;
	while (B != 0)
	{
		sum = A ^ B;//对应位的和
		carry = (A & B) << 1;//对应位和的进位，进位，整体左移一位
		A = sum;
		B = carry;
	}
	return sum;
}

int main()
{
	int A, B;
	while (1)
	{
		cin >> A >> B;
		cout << addAB(A, B) << endl;
	}
	system("pause");
	return 0;
}