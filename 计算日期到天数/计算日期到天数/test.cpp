#define _CRT_SECURE_NO_WARNINGS

# include <iostream>

using namespace std;

int main()
{
	int array[13] = { 0, 31, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 };
	int year, month, day;
	while (cin >> year >> month >> day)
	{
		int sum = 0;
		sum += array[month - 1];
		sum += day;

		if (month > 2)
		{
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
				sum += 1;
		}

		cout << sum << endl;
	}

	system("pause");
	return 0;
}