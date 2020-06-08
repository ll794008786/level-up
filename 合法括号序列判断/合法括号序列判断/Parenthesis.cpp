#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<stack>

using namespace std;

class Parenthesis{
public:
	bool chkParenthesis(string A, int n){
		stack<string> s;
		for (int i = 0; i < n; i++)
		{
			if (A[i] == '(')
				s.push(A[i]);
			else if (A[i] == ')')
			{
				if (s.empty() || s.top() != '(')
					return false;
				else
					s.pop();
			}
			else
				return false;	
		}
		if (!s.empty())
			return false;
		return true;
	}
};