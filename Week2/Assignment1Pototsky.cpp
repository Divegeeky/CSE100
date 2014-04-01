/*
Part I of homework: Original program modified to allow for console view
// *************************************************************** 
//   Names.cpp 
// 
//   Prints a list of student names with their hometowns 
//   and intended major 
// *************************************************************** 
#include<iostream> 
using namespace std; 
int main()
{
	// ------------------------ 
	// main prints the list 
	// ------------------------ 

	cout << endl;
	cout << "\tName\t\tHometown" << endl;  	
	cout << "\t====\t\t========" << endl;  	
	cout << "\tSally\t\tRoanoke" << endl;
	cout << "\tAlexander\tWashington" << endl;
	cout << endl;
	system("pause");
}

// Part II modify the program to display my name and hometown as well as two classmates
#include<iostream> 
using namespace std;
int main()
{
	cout << endl;
	cout << "\tName\t\t\tHometown" << endl;
	cout << "\t====\t\t\t========" << endl;
	cout << "\tJason Pototsky\t\tTucson, AZ" << endl;
	cout << "\tJason Cluff\t\tGilbert, AZ" << endl;
	cout << "\tRichard Church\t\tSt. Louis, MO" << endl;
	cout << endl;
	system("pause");
}
// Part III modify program to allow inclusion of each person's major
#include<iostream> 
using namespace std;
int main()
{
	cout << endl;
	cout << "\tName\t\t\tHometown\t\tMajor" << endl;
	cout << "\t====\t\t\t========\t\t=====" << endl;
	cout << "\tJason Pototsky\t\tTucson, AZ\t\tSoftware Engineering" << endl;
	cout << "\tJason Cluff\t\tGilbert, AZ\t\tElectrical Engineering" << endl;
	cout << "\tRichard Church\t\tSt. Louis, MO\t\tElectrical Engineering" << endl;
	cout << endl;
	system("pause");
}
End of Assignment Part I
*/
//Beginning of Assignment Part II
//Pre-processor directives
#include<iostream> 
#include <string>
#include <sstream>
//Define the namespeace
using namespace std;
//Define the main function
int main()
{
	//Define the integer variables for the program
	int height_feet, height_inches, height_total, idealWeight_female, idealWeight_male;
	//Define the string variables for the program
	string console_input,height_feet_string,height_inches_string;
	//Define the stringstream that will be necessary to split the string
	stringstream ss;
	//Console output telling the user what to input
	cout << "Please input your height in feet, inches \n";
	cout << "seperated by a space. (feet inches) \n";
	cout << "i.e. if you are 5' 4\" input 5 4: ";
	//Get the input from the user and store in console_input
	getline(cin, console_input);
	//Input the console input into the string stream
	ss << console_input;
	//Get the first string input using the whitespace delimiter and place in the variable
	getline(ss, height_feet_string, ' ');
	//Get the second string input using the whitespace delimiter and place in the variable
	getline(ss, height_inches_string, ' ');
	//Convert the string data to integer data
	height_feet = stoi(height_feet_string);
	//Convert the string data to intefer data
	height_inches = stoi(height_inches_string);
	//Get the total inches height by combining the two integers and converting to inches
	height_total = height_inches + (height_feet * 12);
	//Get the ideal weight for females based on the formula
	idealWeight_female = 100 + ((height_total - 60) * 5);
	//Get the ideal weight for males based on the formula
	idealWeight_male = 106 + ((height_total - 60) * 6);
	//Output the ideal female weight
	cout << "Your ideal weight if you are a female would be: " << idealWeight_female << " lbs." << endl;
	//Output the ideal male weight 
	cout << "Your ideal weight if you are a male would be: " << idealWeight_male << " lbs." << endl;
	//Pause the console
	system("pause");
	//Uh, we had a slight weapons malfunction, but uh... everything's perfectly all right now. We're fine. We're all fine here now, thank you. How are you? 
	return 0;
}
