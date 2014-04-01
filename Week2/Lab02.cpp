/* 
Lab Program
Source Code:

#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int someInt, w = 5, x = 9, y = 2, z = 7; 
	char someChar = 'A'; 
	cout << "operator precedence \n"; 
	cout << (x - 1) / (x - w) * y << endl;
	cout << (x - 1) / ((x - w) * y) << endl; 
	cout << static_cast<double>(x) / y << endl; 
	cout << x / y << endl; 
	cout << (w + x % 7 / y) << endl; 
	cout << (abs(y - w) + sqrt(x)) << endl; 
	someInt = someChar; 
	cout << someChar << " " << someInt << endl;
	system("Pause");
}
Output:
operator precedence
4
1
4.5
4
6
6
A 65
Press any key to continue . . .
*/

//Beginning of Part II program
// Pre-processor call to include IOStream
#include<iostream>
//Pre-Processor call to include IOManip
#include<iomanip>
//Define the namespace as std
using namespace std;
//Define the main function
int main()
{
	//Define the double variables that will be utilized in this program
	double house, phone, utilities, cable, total_monthly_payment;
	//Inform the user to input the home payments with the console out
	cout << "Please input your home payments, either rent or mortgage per month. \n";
	//Receive console input and store it in the house variable
	cin >> house;
	//Inform the user to input the phone payments
	cout << "Please input your phone payments per month. \n";
	//Recieve console input and store it in the phone variable
	cin >> phone;
	//Inform the user to input the utility payments
	cout << "Please input your utility payments per month. \n";
	//Receive console input and store it in the utilities variable
	cin >> utilities;
	//Inform the user to input the cable payments
	cout << "Please input your cable bill per month. \n";
	//Receive console input and store it in the cable variable
	cin >> cable;
	//Perform the sum of all payments
	total_monthly_payment = house + phone + utilities + cable;
	//First part of the total output I spaced it out for viewability in the code
	cout << "You should budget for about: $";
	//Second part of the total output including the fixed and setprecision manipulation
	cout << setprecision(2) << fixed << total_monthly_payment << " per month at a minimum. \n";
	//Only in to allow visability of the console window
	system("Pause");
	//Everything is good, pay no attention to the man behind the screen
	return 0;
}