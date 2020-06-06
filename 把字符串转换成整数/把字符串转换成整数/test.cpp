#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class Solution{
public:
	int StrToInt(string str)
	{
		long num = 0;
		int flag = 1;
		//�ȴ����һλ������
		if (str[0] == '+')
			flag = 1;
		else if (str[0] == '-')
			flag = -1;
		else if (str[0] >= '0' && str[0] <= '9')
			num = str[0] - '0';
		else return 0;
		//����ڶ�λ��֮�������
		for (size_t i = 1; i < str.size(); i++)
		{
			if (str[i] >= '0' && str[i] <= '9')
				num = num * 10 + (str[i] - '0');
			else
				return 0;
		}
		//�ж��Ƿ�Խ�磬��Խ�緵��0
		if (flag >= 0 && num <= INT_MAX)
			return num;
		if (flag < 0)
		{
			num *= flag;
			if (num >= INT_MIN)
				return num;
		}
		return 0;
	}
};
