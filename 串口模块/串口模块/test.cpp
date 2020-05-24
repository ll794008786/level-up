#define _CRT_SECURE_NO_WARNINGS

#include "WZSerialPort.h"
#include<iostream>
using namespace std;
int main()
{
	WZSerialPort w;
	if (w.open("com4"))
	{
		string str = "This is a test!!! Let us run this test,then we will see the result of the test.";
		w.send(str);
		cout << w.receive().c_str();
		w.close();
	}
	while (true)
	{

	}
	return 0;
}