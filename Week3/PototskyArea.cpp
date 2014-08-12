/*
Jason Pototsky
CSE100
*/
//Pre-processor Directives
#include<iostream>
#include<math.h>
//Define the namespace
using namespace std;
//Define the square function
float square(){
	//Define the sq_area float
	float sq_area;
	//Define the side variable
	double side;
	//Request user information
	cout << "Please input the length of the side: ";
	//Input the console information into the side variable
	cin >> side;
	//Perform the formula
	sq_area = pow(side, 2);
	//Return the sq area variable to the menu function
	return sq_area;
}
//Define the circle function
float circle(){
	//create the PI constant
	const double PI = std::atan(1.0) * 4;
	//Define the radius variable
	double radius;
	//Define the cir_area variable
	float cir_area;
	//Request user information
	cout << "Please input the radius of the circle: ";
	//Take the console input from the user and place into radius
	cin >> radius;
	//Perform the formula for the area
	cir_area = PI * pow(radius, 2);
	//Return the area to the menu function
	return cir_area;
}
//Define the right triangle function
float right_triangle(){
	//Define the rt area variable
	float rt_area;
	//Define the leg variables
	double leg_a, leg_b;
	//Request user information
	cout << "Please input the value for leg A: ";
	//Take the console input from the user and place into Leg A
	cin >> leg_a;
	//Request user information
	cout << "Please input the value for leg B: ";
	//Take the console input from teh suer and place into Leg B
	cin >> leg_b;
	//Perform the Right Triangle area formula
	rt_area = (leg_a*leg_b) / 2;
	//REturn the area
	return rt_area;
}
//Define the menu
bool menu(){
	//Define the menu selection
	int menu_selection;
	//Define the value for true
	bool value;
	//Define the area
	float area;
	//Menu selection for the user
	cout << "Please select the geometric figure you want the area to: \n";
	cout << "\t 1--square \n";
	cout << "\t 2--circle \n";
	cout << "\t 3--right triangle \n";
	cout << "\t 4--quit \n";
	cout << "Input the number please:";
	//Grab the user information
	cin >> menu_selection;
	
	//Begin the menu logic
	//If the user selects one
	if (menu_selection == 1){
		//Call the square function
		area = square();
		//Console out for the area
		cout << "The area of the square is: " << area << endl;
		//Go back to the beginning
		return false;
	}
	//If user selects two
	else if (menu_selection == 2){
		//Call the circle function
		area = circle();
		//Console out for the area
		cout << "The area of the circle is: " << area << endl;
		//Go back to the beginning
		return false;
	}
	//If the user selects three
	else if (menu_selection == 3){
		//Call the right triangle function
		area = right_triangle();
		//Console output the area
		cout << "The area of the right triangle is: " << area << endl;
		//Start at the beginning
		return false;
	}
	//If the user selects four
	else if (menu_selection == 4){
		//Goodbye
		cout << "Goodbye." << endl;
		//Value true assignment
		value = true;
		//Return the value
		return value;
	}
	//If the user does choose 1,2,3,4
	else {
		//Warning
		cout << "Please input a valid number, try again. \n";
		//Start over
		return false;
	}
}
//Define the main function
int main(){
	//Define and initialize the boolean
	bool cont_loop = false;
	//Begin the loop...I know the solution did not inclue a while loop, but I decided it was more
	//realistic
	while (cont_loop == false){
		//menu loop value
		cont_loop=menu();
	}
	//Pause the program so I can see it
	system("pause");
	//All is good
	return 0;
}