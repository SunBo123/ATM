#include <iostream>
using namespace std;

#include "BalanceInquiry.h"
#include "screen.h"
#include "BankDatabase.h"

BalanceInquiry::BalanceInquiry(int userAccountNumber, Screen &atmScreen,
	BankDatabase &atmBankDatabase) 
	:Transaction(userAccountNumber,atmScreen,atmBankDatabase)
{
	
}


void BalanceInquiry::execute()
{
	BankDatabase &bankDatabase = getBankDatabase();
	Screen &screen = getScreen();

	double availableBalance =
		bankDatabase.getAvailableBalance(getAccountNumber());

	// get the total balance for the current user's Account
	double totalBalance =
		bankDatabase.getTotalBalance(getAccountNumber());

	// display the balance information on the screen
	screen.disPlayMessageLine("\nBalance Information:");
	screen.disPlayMessage(" - Available balance: ");
	screen.disPlayDollar(availableBalance);
	screen.disPlayMessage("\n-Total balance");
	screen.disPlayDollar(totalBalance);
	screen.disPlayMessageLine("");
	
	bankDatabase.createBankDatabase();
}