#include <iostream>
using namespace std;
#include <iomanip>

#include "CashDispenser.h"

CashDispenser::CashDispenser()
{
	count = INITIAL_COUNT;    //初始化 count
}

void CashDispenser::dispenseCash(int amount)
{
	//取款  amount 取款数目

	int billsRequired = amount / 20; // number of $20 bills required
	count -= billsRequired;
}
bool CashDispenser::isSufficientCashAvailable(int amount) const
{
	//判断是否可取

	int billsRequired = amount / 20; // number of $20 bills required

	if (count >= billsRequired)
	{
		return true; // enough bills are available
	}
	else
	{
		return false;
	}
		
}