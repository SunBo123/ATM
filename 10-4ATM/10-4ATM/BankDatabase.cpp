// BankDatabase.cpp
// Member-function definitions for class BankDatabase.
#include "BankDatabase.h" // BankDatabase class definition

// BankDatabase default constructor initializes accounts

#include <iostream>
using namespace std;
#include <fstream>
#include <cstdlib>


BankDatabase::BankDatabase()
{

	
   // create two Account objects for testing  用默认构造函数创建两个账户
   //Account account0( 12345, 54321, 1000.0, 1200.0 );
   //Account account1( 98765, 56789, 200.0, 200.0 );
   
	
   //从txt文件中读取数据，构造新的Account账户
   fstream inputData("client.txt",ios::in);
   if(!inputData)
   {
      cerr<<"could not open\n"<<endl;
	  exit(1);
   }
   int number;
   double balance1,balance2;
  
  inputData >> number >> balance1 >> balance2;
  // cout << number << ' ' << balance1 << ' ' << balance2 << "\n" << endl;
  Account account2(number, 54321, balance1, balance2);
  inputData >> number >> balance1 >> balance2;
  Account account3(number, 56789, balance1, balance2);
	 
   

   
  

   // add the Account objects to the vector accounts
   //accounts.push_back( account0 ); // add account1 to end of vector
   //accounts.push_back( account1 ); // add account2 to end of vector
  //把Account存入 vector  accounts中
   accounts.push_back(account2);
   accounts.push_back(account3);
   createBankDatabase();

} // end BankDatabase default constructor



// retrieve Account object containing specified account number
Account * BankDatabase::getAccount( int accountNumber )
{
   // loop through accounts searching for matching account number
   for ( size_t i = 0; i < accounts.size(); i++ )
   {
      // return current account if match found
      if ( accounts[ i ].getAccountNumber() == accountNumber )
         return &accounts[ i ];
   } // end for

   return NULL; // if no matching account was found, return NULL
} // end function getAccount


// determine whether user-specified account number and PIN match
// those of an account in the database
bool BankDatabase::authenticateUser( int userAccountNumber, 
   int userPIN )
{
   // attempt to retrieve the account with the account number
   Account * const userAccountPtr = getAccount( userAccountNumber );

   // if account exists, return result of Account function validatePIN
   if ( userAccountPtr != NULL )
      return userAccountPtr->validatePIN( userPIN );
   else
      return false; // account number not found, so return false
} // end function authenticateUser


// return available balance of Account with specified account number
double BankDatabase::getAvailableBalance( int userAccountNumber )
{
   Account * const userAccountPtr = getAccount( userAccountNumber );
   return userAccountPtr->getAvailableBalance();
} // end function getAvailableBalance

// return total balance of Account with specified account number
double BankDatabase::getTotalBalance( int userAccountNumber )
{
   Account * const userAccountPtr = getAccount( userAccountNumber );
   return userAccountPtr->getTotalBalance();
} // end function getTotalBalance


// credit an amount to Account with specified account number
void BankDatabase::credit( int userAccountNumber, double amount )
{
   Account * const userAccountPtr = getAccount( userAccountNumber );
   userAccountPtr->credit( amount );
} // end function credit

// debit an amount from Account with specified account number
void BankDatabase::debit( int userAccountNumber, double amount )
{
   Account * const userAccountPtr = getAccount( userAccountNumber );
   userAccountPtr->debit( amount );
} // end function debit


void BankDatabase::createBankDatabase()
{
	int i = 0;

	fstream createData("client.txt", ios::in|ios::out | ios::binary);
	if (!createData)
	{
		cerr << "no such files\n " << endl;
		exit(1);
	}

	for (i = 0; i <accounts.size(); i++)
	{
		createData << accounts[i].getAccountNumber() << ' ' << accounts[i].getAvailableBalance()
			<< ' ' << accounts[i].getTotalBalance() << ' ' << endl;
	}


}



