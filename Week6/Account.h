#include<iostream>
using namespace std;
class Account
{
private:
	double balance;

public:
  Account();
  Account(double initialBalance);
  void deposit(double depositAmount);
  void withdraw(double withdrawAmount);
  double getBalance();
  void addInterest(double rate);

};