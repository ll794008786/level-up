#define _CRT_SECURE_NO_WARNINGS


using namespace std;

bool isPalindrome(int x)
{
	double ret = 0;
	int n = x;
	while (n > 0)
	{
		ret = (ret * 10) + (n % 10);
		n /= 10;
	}
	if (ret == x)
	{
		return true;
	}
	return false;
}
