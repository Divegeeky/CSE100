#include "Date.h"

/*********************************************************
 *                    Date::Date                         *
 * This default constructor  sets date to Jan. 1, 2001.  *
 *********************************************************/
Date::Date()
{
	month = day = 1;   
	year  = 2001;
	setName();
}

/**************************************************************
 *                         Date::Date                         *
 * This overloaded constructor calls the class "set" function *
 * to set the date to the month/day/year passed to it.        *
 **************************************************************/
Date::Date(int m, int d, int y)
{
	month=m;
	day=d;
	year=y;
	setName();
}
void Date::setDate(int m, int d, int y)
{
    month=m;
	day=d;
	year=y;
	setName();

}

/*********************************************************
 *                     Date::setName                     *
 * This member function sets the month name to match the *
 * month number.                                         *
 *********************************************************/
void Date::setName()
{
	switch (month)
	{ 
		case  1: name = "January";  break;
		case  2: name = "Febraury"; break;
		case  3: name = "March";    break;
		case  4: name = "April";    break;
		case  5: name = "May";      break;
		case  6: name = "June";     break;
		case  7: name = "July";     break;
		case  8: name = "August";   break;
		case  9: name = "September";break;
		case 10: name = "October";  break;
		case 11: name = "November"; break;
		case 12: name = "December"; 
	}
}

/*************************************************************
 *                        Date::showDate1                    *
 * This member function displays the date in 3/15/10 format. *
 *************************************************************/
void Date::showDate1()
{
   
   
	cout << month << '/' << day << '/' ;
	cout << year << endl;
}

/********************************************************************
 *                          Date::showDate2                         *
 * This member function displays the date in March 15, 2010 format. *
 ********************************************************************/
void Date::showDate2()
{
	cout << name << " " << day << ", " << year << endl;
}

/********************************************************************
 *                          Date::showDate3                         *
 * This member function displays the date in 15 March 2010 format.  *
 ********************************************************************/
void Date::showDate3()
{
	cout << day << " " << name << " " << year << endl;
}