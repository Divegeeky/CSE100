/* 
This Program was developed by Jason Pototsky
3/22/2014 for Week 1 Lab 0
For CSE100 Prin of Programming with C
Instructor: Janaka Balasooriya , Devi Archana Paladugu
*/

/* Question 1

Source Code:
#include <iostream> 
using namespace std;
int main()
{
	cout << "My first C++ program.";
	cout << "The sum of 2 and 3 = " << 5;
	cout << "7 + 8 = " << 7 + 8;
	return 0;
}

Ouptut:
My first C++ program.The sum of 2 and 3 = 57 + 8 = 15Press any key to continue .
. .
*/

/* Question 2

Source Code:
#include <iostream> 
using namespace std;
int main()
{
	cout << "My first C++ program." << endl;
	cout << "The sum of 2 and 3 = " << 5 << endl;
	cout << "7 + 8 = " << 7 + 8 << endl;
	return 0;
}

Output:
My first C++ program.
The sum of 2 and 3 = 5
7 + 8 = 15
Press any key to continue . . .
*/

/* Question 3
Source Code:
#include <iostream> 
using namespace std;
int main()
{
	cout << "\t\t\t\ My first C++ program." << endl;
	cout << "The sum of 2 and 3 = " << 5 << endl;
	cout << "7 + 8 = " << 7 + 8 << endl;
	return 0;
}Ouput:My first C++ program.
The sum of 2 and 3 = 5
7 + 8 = 15
Press any key to continue . . .
*/

// Question 4 Program is as follows:
//Pre-processor directive to include iostream
#include <iostream>
//Pre-processor directive to include string
#include <string>
//Define the namespace as standard
using namespace std;
//Define the main function
int main()
{
	//Define the string variables
	string lastName, firstName, academicStatus;
	//Define the integer variables
	int age;
	//Initialize the lastName variable
	lastName = "Pototsky";
	//Initialize the firstName variable
	firstName = "Jason";
	//Initialize the age variable
	age = 33;
	//Initialize the academicStatus variable
	academicStatus = "Junior";
	//Console out statement for lastname, firstname
	cout << lastName << ", " << firstName << endl;
	//Console out statement for the age
	cout << age << endl;
	//Console out statement for the academic status
	cout << academicStatus << endl;
	//Return 0 for nothing wrong
	return 0;
}
/*
Output:
Pototsky, Jason
33
Junior
Press any key to continue . . .
*/