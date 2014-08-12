/*
Jason Pototsky
CSE100
5/3/2014
*/
//Pre-Processor Directive
#include<iostream>
//Define the namespace
using namespace std;
//Define the Account class, which will form the blueprint for the Account object
class Account
{
//Define the Private variables
private:
	//Define the private variable balance
	double balance;
//Define the Public variables and functions
public:
	//Define the following functions which can be called from outside the object
	Account();
	Account(double initialBalance);
	void deposit(double depositAmount);
	void withdraw(double withdrawAmount);
	double getBalance();
	void addInterest(double rate);
};