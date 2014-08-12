/*
Jason Pototsky
CSE100
5/3/2014

This is the altered .cpp that was provided in the instructions to accept the pototskyDate header
*/

//Pre-Processor directives
#include <iostream>
#include "PototskyDate.h"
//Define the namespace
using namespace std;

//Define the main function
int main()
{
	//Create a Date object named d1 using the default constructor (no input)
	Date d1;
	//Create a Date object named d2 using the input constructor
	Date d2(2, 12, 2010);
	//Show the date for the d1 object in the first format option
	d1.showDate1();
	//Show the date for the d2 object in the second format option
	d2.showDate2();
	//Set the date for the d1 object using the setDate method
	d1.setDate(8, 29, 1986);
	//Show the date for the d1 ibject in the third format option
	d1.showDate3();
	//Pause the console
	system("pause");
	//There is nothing wrong
	return 0;
}