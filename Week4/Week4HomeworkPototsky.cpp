/*
Jason Pototsky
CS100

Week 4 Homework

Soft Drink Survey Program

Source Code:
*/

//Pre-Processor Directives
#include<iostream>
#include<string>
//Define the namespace
using namespace std;
//Define the global variables
int coffee_count, tea_count, coke_count, oj_count, participant_count = 1;
//Function to perform the tally using the integer input
void tally(int count_input){
	//If the user input 1
	if (count_input == 1){
		//Incremenent the coffee counter
		coffee_count++;
	}
	//If the user input 2
	else if (count_input == 2){
		//Increment the tea counter
		tea_count++;
	}
	//If the user input 3
	else if (count_input == 3){
		//Increment the coke counter
		coke_count++;
	}
	//If the user input 4
	else if (count_input == 4){
		//Incrememnt the oj counter
		oj_count++;
	}
}
//Define the function for the menu
bool menu(){
	//Define the variables needed for this function
	int user_input;
	bool exit = false;
	//Tell the user the information they need to input.
	cout << "Good Afternoon, welcome to our survey program. \n";
	cout << "Please input the information as needed. \n";
	cout << "Soft Drink Survey \n";
	cout << "\t1. Coffee \n";
	cout << "\t2. Tea \n";
	cout << "\t3. Coke \n";
	cout << "\t4. Orange Juice \n";
	cout << "\t5. Please enter -1 to exit \n";
	cout << "Please input the favorite beverage of person #" << participant_count << ": Choose 1, 2, 3, or 4 from the \n";
	cout << "above menu or - 1 to exit the program \n";
	//Capture the user input
	cin >> user_input;
	//If the user input -1
	if (user_input == -1){
		//Set the local function exit variable to true
		exit = true;
		//Recover that first participant increment in order to display the participant
		participant_count--;
		//Return the loop exit boolean
		return exit;
	}
	//If the user input 1,2,3,or 4
	else if (user_input == 1 || user_input == 2|| user_input == 3 || user_input == 4)
	{	
		//perform the tally function with the user input
		tally(user_input);	
		//Increment the participant count
		participant_count++;
	}
	//If the cin fails, this will occur if a user inputs a string into the integer
	else if (cin.fail()){
		//Message
		cout << "You sneaky wabbit, you entered a string into an integer field. \n";
		//Read and ignore the invalid string
		std::string ignoreLine; 
		//Read and ignore the entire line
		std::getline(cin, ignoreLine); //read the line till next space
		//Clean the cin information 
		cin.clear();
		//Reset the input
		cin.ignore();
	}
	//If the user inputs and invalid number
	else {
		cout << "You have not entered a valid input, please try again.";
	}
	//Start the loop again
	return false;
}
//Setup the display results function
void display_results(){
	//Console display to let user know the result of the survey 
	cout << "The results of the survey are as follows. \n";
	cout << "The amount of participants were: " << participant_count << endl;
	cout << "The Total amount of people that preferred coffee were: " << coffee_count << endl;
	cout << "The Total amount of people that preferred tea were: " << tea_count << endl;
	cout << "The Total amount of people that preferred coke were: " << coke_count << endl;
	cout << "The Total amount of people that preferred orange juice were: " << oj_count << endl;
	cout << "Thank you, have a nice day. \n";
}
//Define the main function
int main(){
	//Set the local exit variable
	bool exit = false;
	//Perform the loop variable
	while (exit == false){
		//Perform the menu function that will return a boolean that will go into the exit variable
		exit = menu();
	}
	//Perform the display results function
	display_results();
	//Pause it so I can see the console
	system("pause");
	//Everything is alright
	return 0;
}