#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>

using namespace std;

string Change(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		//�ֱ�ת����ĸ
		if ((s[i] >= 'F') && (s[i] <= 'Z'))
			s[i] -= 5;
		else if ((s[i] >= 'A') && (s[i] <= 'E'))
			s[i] += 21;
		// �����ո�ֱ����������
		else
			continue;
	}
	return s;
}

int main()
{
	string s;
	while (getline(cin, s))
	{
		string s1 = Change(s);
		cout << s1 << endl;
	}
	system("pause");
	return 0;
}


