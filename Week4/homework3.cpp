#include<iostream>
using namespace std;
int main()
{

int coffee=0, tea=0, coke=0, orange=0;
int choice=0;

while(choice !=-1)
{

cout<<"Soft Drink Survey"<<endl;
cout<<"1. Coffee "<<endl;
cout<<"2. Tea    "<<endl;
cout<<"3. Coke   "<<endl;
cout<<"4. Orange "<<endl;
cout<<"5. Please enter -1 to exit"<<endl;

cin>>choice;

switch(choice)
{
case 1:
	coffee++;
	break;
case 2:
	tea++;
	break;
case 3:
	coke++;
	break;
case 4:
	orange++;
	break;
case -1:
	break;
default:
	cout<<"Invalid Input"<<endl;
}

}

cout<<"Total number of people surveyed = "<<coffee+ tea + coke+ orange;
cout<<" \n\nCoffee = "<<coffee;
cout<<"\n Tea = "<<tea;
cout<<"\n Coke = "<<coke;
cout<<"\n Orange Juice= "<<orange;
cout<<"\n\n";


system("pause");
return 0;
}