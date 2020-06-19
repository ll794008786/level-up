#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string AddLongInteger(string &str1, string &str2)
{
	int i = str1.size() - 1;
	int j = str2.size() - 1;
	string result = "";
	int carry = 0;
	while (i >= 0 || j >= 0)
	{
		if (i >= 0)
			carry += (str1[i] - '0');
		if (j >= 0)
			carry += (str2[j] - '0');
		result += (char)(carry % 10 + '0');
		carry /= 10;
		--i;
		--j;
	}
	if (carry == 1)
		result += '1';
	reverse(result.begin(), result.end());
	return result;
}

int main(){
	string str1;
	string str2;
	while (cin >> str1 >> str2)
	{
		cout << AddLongInteger(str1, str2) << endl;
	}
	system("pause");
	return 0;
}