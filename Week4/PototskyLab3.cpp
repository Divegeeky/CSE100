/*
Jason Pototsky
CSE100

Homework Week 4

Shirt Price Calculator

Source Code:
*/
//Pre-Processor Directive
#include<iostream>
//Define the namespace
using namespace std;
//Define the global variable to store the cost amongst several functions
double total_cost;

//Define the discount function that accepts an integer input value
double discount(int input_value){
	//Define the double variables to use in the function
	double cost_to_return,price_of_shirt=12.00, rate1 = .10, rate2 =.15, rate3=.20, rate4 = .25;
	//If the shirts purchase are less than 5
	if (input_value < 5){
		//Tell the user what the price per shirt will be
		cout << "The Price per shirt is $" << price_of_shirt << endl;
		//Initialize the cost to return value to return
		cost_to_return = price_of_shirt * input_value;
	}
	//If the shirts to purchase are between 5-10
	else if (input_value >= 5 && input_value <= 10){
		//Tell the user what the price per shirt will be
		cout << "The Price per shirt is $" << (price_of_shirt - (price_of_shirt*rate1))<< endl;
		//Initialize the cost to return value to return
		cost_to_return = (price_of_shirt - (price_of_shirt*rate1))*input_value;
	}
	//If the shirts to purchase are between 11-20
	else if (input_value >10 && input_value <= 20){
		//Tell the user what the price per shirt will be
		cout << "The Price per shirt is $" << (price_of_shirt - (price_of_shirt*rate2))<< endl;
		//Initialize the cost to return value to return
		cost_to_return = (price_of_shirt - (price_of_shirt*rate2))*input_value;
	}
	//If the shirts to purchase are between 21-30
	else if (input_value > 20 && input_value <= 30){
		//Tell the user what the price per shirt will be
		cout << "The Price per shirt is $" << (price_of_shirt - (price_of_shirt*rate3)) << endl;
		//Initialize the cost to return value to return
		cost_to_return = (price_of_shirt - (price_of_shirt*rate3))*input_value;
	}
	//If the shirts to purchase are greater than 30
	else if (input_value > 30){
		//Tell the user what the price per shirt will be
		cout << "The Price per shirt is $" << (price_of_shirt - (price_of_shirt*rate4)) << endl;
		//Initialize the cost to return value to return
		cost_to_return = (price_of_shirt - (price_of_shirt*rate4))*input_value;
	}
	//Return the cost_to_return variable
	return cost_to_return;
}

//Defint the menu function
bool menu(){
	//Define the number of shirts variable
	int number_of_shirts;
	//Define the value to be used to return
	bool value;
	//Tell the user what is going on and what to enter
	cout << "Good Morning, This is a shirt price calculator. \n";
	cout << "How many shirts do you want to buy? You can exit by entering 0. \n";
	//Console input to the number of shirts
	cin >> number_of_shirts;
	//If the shirts number entered is negative
	if (number_of_shirts < 0) {
		//Output the message than send nothing in order to start the loop again
		cout << "Please input a non-negative number please try again. \n";
	}
	//If the shirts entered is 0
	if (number_of_shirts == 0){
		//Good Bye mi amigo
		cout << "Goodbye! \n";
		//Initialize the value to true
		value = true;
		//Return the value
		return value;
	}
	//If the number of shirts is greater than 0
	if (number_of_shirts > 0){
		//Intialize the global variable with the result of discount function with the number of shirts input
		total_cost = discount(number_of_shirts);
	}
	//Return false to the program to continue to the next iteration
	return false;
}

//Define the main function
int main(){
	//Set the console output to fixed numbers (adds zeros to meet the precision)
	std::cout.setf(ios::fixed);
	//Set the console precision to 2 decimal point
	std::cout.precision(2);
	//Define and Initialize the exit variable
	bool exit = false;
	//Begin the while loop
	while (exit==false)
	{
		//Set the exit variable to the result of the menu function
		exit = menu();
		//If the result of exit is false...the user did not choose to exit
		if (exit == false)
		{
			//Print the total_cost global variable
			cout << "The total cost to the customer is $" << total_cost << endl;
		}
	}
	//Put in so I can see the console input
	system("pause");
	//These are not the droids you are looking for
	return 0;
}