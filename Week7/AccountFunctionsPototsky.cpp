/*
Jason Pototsky
CSE100
5/3/2014
*/
//Pre-Processor Directives
#include<iostream>
//Define the the namespace
using namespace std;
//Include the Header file for AccountPototsky which has the class object layout
#include "AccountPototsky.h"

//Define the Constructor or the default constructor when no information is supplied to the object
Account::Account()
{
	//Set the balance parameter to 0
	balance = 0;
};

//Define the Constructor when there is a double input provided to the object which will be named start_balance
Account::Account(double start_balance)
{
	//Set the object parameter balance to the supplied input
	balance = start_balance;
};

//Define the deposit function that uses an input named deposit_value
void Account::deposit(double deposit_value)
{
	//Increment the balance based upon the deposit value input into the function
	balance = balance + deposit_value;
}

//Define the withdraw function that uses an input named withdraw_value
void Account::withdraw(double withdraw_value)
{
	//Decrement the balance based upon the withdrawl value input into the function
	balance = balance - withdraw_value;
}

//Define the getBalance function
double Account::getBalance()
{
	//Return the private balance value
	return balance;
}

//Define the addInterest function that accepts a double value named rate
void  Account::addInterest(double rate)
{
	//increment the balance by the balance with interest added
	balance = balance + balance*rate;
}