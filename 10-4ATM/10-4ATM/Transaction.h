#ifndef TRANSACTION_H
#define TRANSACTION_H

class Screen;
class BankDatabase;

#include <iostream>
using namespace std;

class Transaction
{
public:
	Transaction(int, Screen &, BankDatabase &);


	
	 ~Transaction()
	{
		 cout << "ending Transaction\n" << endl;
	}
	
	int getAccountNumber() const;
	Screen &getScreen() const;
	BankDatabase &getBankDatabase() const;
	virtual void execute() = 0;
private:
	int accountNumber;
	Screen &screen;
	BankDatabase &bankDatabase;
};

#endif