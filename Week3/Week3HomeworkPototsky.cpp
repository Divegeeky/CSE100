/*
Jason Pototsky
CSE100

Part I homework answers:
A)	If user inputs 99 then output will be 0. The reason being that cin stores to b and the if statement states if b is not greater than 300 than a = 0 so it outputs: a:

B)	If the user inputs 45, 78, 12 then the output will be 45. The reason being that the first statement will resolve to a false statement which is what the if statement is looking for with the ! so it will output num 1 which is 45.
*/

/*
Part II
Shipping Program
Source Code:
*/
//Pre-processor Directives
#include<iostream>
#include <iomanip> 
//Define the namespace
using namespace std;
//Define the main function
int main()
{
	//Define the double variables to be used
	double distance_shipped, rate_to_charge, weight, distance_to_charge;
	//Define the float variables to be used
	float total_charge;
	//Define the constants
	const double rate1 = 1.10, rate2 = 2.20, rate3 = 3.70, rate4 = 4.80;
	//Define the boolean loop variables
	bool proceed_weight = false, proceed_distance = false;
	//Define and Initialize the celing variable
	double ceiling_rate = 500.00;
	//Begin the weight loop, which will continue unless the proceed weight is equal to true
	while (proceed_weight == false) {
		//Tell the User what to input
		cout << "Please input the weight of the package you wish to ship \n";
		//Console input to weight
		cin >> weight;
		//If the weight is less than or equal to 0
		if (weight <= 0){
			//Start the loop over and print the "error" message
			proceed_weight = false;
			cout << "Please input a weight value greater than zero. \n";
		}
		//If the weight is greater than 20
		else if (weight > 20){
			//Start the loop over and print the "error" message
			proceed_weight = false;
			cout << "Please input a weight value less than twenty. \n";
		}
		//If the weight is less than or equal to 20 and greater than 0
		else if (weight <=20 && weight > 0){
			//End the loop with the last variable entered
			proceed_weight = true;
		}
		//I put this in to check the logic of my loop
		else {
			//Start the loop over and print the "error" message
			cout << "I'm not really sure what you did.....you perplex me. \n";
			cout << "You input:" << weight << " For weight, I don't know how to handle that. \n";
			proceed_weight = false;
		}
	} 
	//Begin the distance loop, which will continue until proceed_diistance is true
	while (proceed_distance == false)
	{
		//Request input from the user
		cout << "Now please input the distance you wish to travel. \n";
		//Store the console input to the variable
		cin >> distance_shipped;
		//If the distance shipped is less than 10 or greater than 3000
		if (distance_shipped <10 || distance_shipped > 3000){
			//Start the loop over and print the "error" message
			cout << "I'm sorry our minimum distance to ship is 10 Miles, and maximum is 3000 Miles \n";
			proceed_distance = false;
		}
		//If the distance is greater than or equal to 10 and less than or equal to 3000
		else if (distance_shipped >= 10 && distance_shipped <= 3000){
			//End the loop and accept the value
			proceed_distance = true;
		}
		//I put this in to check the logic of my loop
		else {
			cout << "I'm not really sure what you did.....you perplex me. \n";
			cout << "You input:" << distance_shipped << " For distance, I don't know how to handle that. \n";
			proceed_distance = false;
		}
	} 
	
	//Begin the rate control statements
	//If the weight is Less than 2
	if (weight <= 2){
		//Set the rate_to_charge to rate 1
		rate_to_charge = rate1;
	}
	//If the weight is greater than 2 and less than or equal to 6
	else if (weight > 2 && weight <= 6){
		//Set the rate_to_charge to rate 2
		rate_to_charge = rate2;
	}
	//If the weight is greater than 6 and less than or equal to 10
	else if (weight > 6 && weight <= 10){
		//Set the rate to charge to rate 3
		rate_to_charge = rate3;
	}
	//If the weight is greater than 10, the weight check will cap at 20 on the above loop
	else if (weight > 10){
		//Set the rate to charge to rate 4
		rate_to_charge = rate4;
	}
	//Use the ceil method to set the distance to charge 
	distance_to_charge = ceil(distance_shipped / ceiling_rate);
	//Get the total_charge from the new variables
	total_charge = static_cast<float>(distance_to_charge) * static_cast<float>(rate_to_charge);
	//Output the results placing it into the common notation
	cout << "The amount of money you will need to pay is:  $" << std::fixed << setprecision(2) << total_charge << endl;
	//Pause the console so I can see it
	system("pause");
	//Everything is alright
	return 0;
}