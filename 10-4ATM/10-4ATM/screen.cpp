
#include <iostream>
using namespace std;
#include <iomanip>
#include "screen.h"

void Screen::disPlayMessage(string message) const
{
	//输出
	cout << message;
}


void Screen::disPlayMessageLine(string message) const
{
	//输出并换行
	cout << message << "\n" << endl;
}

void Screen::disPlayDollar(double amount) const
{
    //输出金额
	cout << fixed << showpoint << setprecision(2) << "$:" << amount << "\n" << endl;
}