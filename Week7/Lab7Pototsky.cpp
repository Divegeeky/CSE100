/*
Jason Pototsky
CSE100
5/3/2014

This is the altered program that was supplied by the lab in order to run using my provided 
functions and class
*/
//Pre-Processor Directive
#include<iostream>
//Define the namespace
using namespace std;
//Include the AccountPototsky header
#include "AccountPototsky.h"

//Define the main function
int main()
{
	//Create the Account object named a1 using the default constructor
	Account a1;
	//Create the Account object named a2 using the input constructor
	Account a2(500);
	//Deposit 200 into the a1 object using the object method
	a1.deposit(200);
	//Withdraw 50 from the a2 object using the object method
	a2.withdraw(50);
	//Add interest using a rate of .2 or 2% using the object method
	a1.addInterest(0.2);
	//Output the balance of a1 object using the getBalance method
	cout << a1.getBalance();
	//End the line
	cout << "\n";
	//Output the balance of a2 object using the getBalance method
	cout << a2.getBalance();
	//End the line
	cout << "\n";
	//Pause the console so I can see the output
	system("pause");
	//Everything executed correctly
	return 0;
}