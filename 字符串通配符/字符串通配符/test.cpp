#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

bool Match(const char* str1, const char* str2)
{
	if (*str1 == '\0' && *str2 == '\0')
		return true;
	if (*str1 == '\0' || *str2 == '\0')
		return false;

	if (*str1 == '?')
		return Match(str1 + 1, str2 + 1);
	else if (*str1 == '*')
		return Match(str1 + 1, str2) || Match(str1 + 1, str2 + 1) || Match(str1, str2 + 1);
	else if (*str1 == *str2)
		return Match(str1 + 1, str2 + 1);
	return false;
}

int main()
{
	string str1;
	string str2;
	while (cin >> str1 >> str2)
	{
		if (Match(str1.c_str(), str2.c_str()))
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	system("pause");
	return 0;
}