/*
Jason Pototsky
CSE100

Lab2
Part I:


1.) Excersize 4:

// This program tests whether or not an initialized value 
// is equal to a value input by the user 
// Jason Pototsky
#include <iostream> 
using namespace std;
int main()
{
	int num1, num2;
	cout << "Please enter an integer for number one" << endl;
	cin >> num1;
	cout << "Please enter an integer for number two" << endl;
	cin >> num2;
	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	if (num1 == num2){
		cout << "The Values are the same. \n";
		cout << "Hey, that’s a coincidence!" << endl;
	}
	else{
		cout << "The values are not the same" << endl;
	}
	system("pause");
	return 0;
}
*/

/*
2.) Excersize 4:

// This program prints "You Pass" if a student's average is 
// 60 or higher and prints "You Fail" otherwise 
// Jason Pototsky 
#include <iostream> 
using namespace std;
int main()
{

	float average; // holds the grade average 
	cout << "Input your average:" << endl;

	cin >> average;

	if (average >= 90 && average <=100){
		cout << "You Get an A" << endl;
	}
	else if (average >= 80 && average < 90){
		cout << "You get a B" << endl;
	}
	else if (average >= 70 && average < 80){
		cout << "You get a C" << endl;
	}
	else if (average >= 60 && average < 70){
		cout << "You get a D" << endl;
	}
	else if (average >= 0 && average < 60 ){
		cout << "You Fail" << endl;
	}
	else if (average >100){
		cout << "Invalid Data entry." << endl;
	}
	system("pause");
	return 0;
}// What will happen to your program if you enter a negative value such as -12?
// The program will just not conduct any of the if statements, and not say anything.
*/