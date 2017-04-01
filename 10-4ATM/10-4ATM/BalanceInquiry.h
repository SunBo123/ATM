#ifndef BALANCE_INQUIRY_H
#define BALANCE_INQUIRY_H

#include "Transaction.h" // Transaction class definition

class BalanceInquiry : public Transaction
{
public:
	BalanceInquiry(int, Screen &, BankDatabase &); // constructor

	~BalanceInquiry()
	{
		cout << "²éÑ¯½áÊø\n" << endl;
	}

	virtual void execute(); // perform the transaction
}; // end class BalanceInquiry

#endif