
#include <iostream>
using namespace std;
#include <iomanip>
#include "screen.h"

void Screen::disPlayMessage(string message) const
{
	//���
	cout << message;
}


void Screen::disPlayMessageLine(string message) const
{
	//���������
	cout << message << "\n" << endl;
}

void Screen::disPlayDollar(double amount) const
{
    //������
	cout << fixed << showpoint << setprecision(2) << "$:" << amount << "\n" << endl;
}