#include<iostream>
using namespace std;
#include "Account.h"

Account::Account()
{
	balance=0;
};

Account::Account(double intialBalance)
{
	balance=intialBalance;
};

void Account::deposit(double depositAmount)
{
	balance=balance+depositAmount;
}

void Account::withdraw(double withdrawAmount)
{
	balance=balance-withdrawAmount;
}

double Account::getBalance()
{
	return balance;
}

void  Account::addInterest(double rate)
{
	balance = balance + balance*rate;
}







