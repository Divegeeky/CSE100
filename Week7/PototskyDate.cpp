/*
Jason Pototsky
CSE100
5/3/2014
*/
//Pre-Processor Directives
//Include the PototskyDate header
#include"PototskyDate.h"
#include<string>

//Define the constructor which will function when the object is created without any input
Date::Date(){
	//Set the default date to Jan 1, 2001
	month = 1;
	day = 1;
	year = 2001;
	//Set the month name
	setMonthName();
}

//Define the constructor which will function when the object is created with input of three integers
Date::Date(int month_input, int day_input, int year_input){
	//Set the date to the input
	month = month_input;
	day = day_input;
	year = year_input;
	//Set the month name
	setMonthName();
}

//Define the SetDate function which will set the date after the object is created
void Date::setDate(int month_input, int day_input, int year_input){
	//Set the date to the inputs
	month = month_input;
	day = day_input;
	year = year_input;
	//Set the new monthName
	setMonthName();
}

//Define the setMonthName function
void Date::setMonthName(){
	//Use the month as a switch case
	switch (month)
	{
	//If the month integer is 1
	case 1:
		//Set the month name to the string
		month_name = "January";
		break;
	//If the month integer is 2
	case 2:
		//Set the month name to the string
		month_name = "February";
		break;
	//If the month integer is 3
	case 3:
		//Set the month name to the string
		month_name = "March";
		break;
	//If the month integer is 4
	case 4:
		//Set the month name to the string
		month_name = "April";
		break;
	//If the month integer is 5
	case 5:
		//Set the month name to the string
		month_name = "May";
		break;
	//If the month integer is 6
	case 6:
		//Set the month name to the string
		month_name = "June";
		break;
	//If the month integer is 7
	case 7:
		//Set the month name to the string
		month_name = "July";
		break;
	//If the month integer is 8
	case 8:
		//Set the month name to the string
		month_name = "August";
		break;
	//If the month integer is 9
	case 9:
		//Set the month name to the string
		month_name = "September";
		break;
	//If the month integer is 10
	case 10:
		//Set the month name to the string
		month_name = "October";
		break;
	//If the month integer is 11
	case 11:
		//Set the month name to the string
		month_name = "November";
		break;
	//If the month integer is 12
	case 12:
		//Set the month name to the string
		month_name = "December";
		break;
	}
}

//Define the showDate1 function
	void Date::showDate1(){
		//Output to the console in the desired format
		cout << month << '/' << day << '/';
		cout << year << endl;
	}

//Define the showDate2 function
	void Date::showDate2(){
		//Output to the console in the desired format
		cout << month_name << " " << day << ", " << year << endl;
	}

//Define the shwoDate3 function
	void Date::showDate3(){
		//Output to the console in the desired format
		cout << day << " " << month_name << " " << year << endl;
	}