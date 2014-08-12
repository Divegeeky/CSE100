/*
Jason Pototsky
CSE100
5/3/2014
*/
//Pre-Processor Directives
#include<iostream>
#include<string>
//Define the namespace
using namespace std;

//Define the class Date which will form the framework for the Date object
class Date
{
//Define the private variables and functions
private:
	//Define the parameters of the object
	int month;
	int day;
	int year;
	string month_name;
	//Define the private method for the object
	void setMonthName();

//Define the public parameters and methods that can be called outside the object
public:
	//Define the two constructors
	Date();
	Date(int, int, int);

	//Define the showdate methods
	void showDate1();
	void showDate2();
	void showDate3();

	//Define the setDate method
	void setDate(int month, int day, int year);
};