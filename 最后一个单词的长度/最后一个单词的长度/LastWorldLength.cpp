#define _CRT_SECURE_NO_WARNINGS

#include"LastWorldLength.h"

using namespace std;

int lengthOfLastWord(char * s){
	if (s[0] == '\0')
		return 0;
	int len = strlen(s) - 1;
	int i, res = 0;
	//printf("len is %d,str is %d\n",len,s[0]);
	while (len >= 0 && s[len] == ' ')
	{
		//printf("len is %d,str is %d",len,s[len]);
		len--;
	}

	if (len < 0)
		return res;
	for (i = len; i >= 0 && s[i] != ' '; i--)
	{
		res++;
	}
	return res;
}