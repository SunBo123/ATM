#include <iostream>
using namespace std;
#include <iomanip>

#include "CashDispenser.h"

CashDispenser::CashDispenser()
{
	count = INITIAL_COUNT;    //��ʼ�� count
}

void CashDispenser::dispenseCash(int amount)
{
	//ȡ��  amount ȡ����Ŀ

	int billsRequired = amount / 20; // number of $20 bills required
	count -= billsRequired;
}
bool CashDispenser::isSufficientCashAvailable(int amount) const
{
	//�ж��Ƿ��ȡ

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