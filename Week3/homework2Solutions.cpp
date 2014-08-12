#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
  
    double distance, weight, rate, distanceRange=0;
    const double RATE1=1.10, RATE2=2.20, RATE3=3.70, RATE4=4.80;
    bool dataokay=true;

    

    cout<<"Enter the wight of the parcel:";
    cin>>weight;

    cout<<"\n Enter the distance:";
    cin>>distance;

    // check if the weight is in the correct range
    if(weight <= 0.0 )
    {
      dataokay=false;
      cout<<"weight should be a greater than 0\n";
      }
    else if(weight > 20.0)
    {
    dataokay=false;
    cout<<"weight should be a less than or equal to than 20 \n ";
      } 

    if(distance < 10.0 || distance > 3000.0)
    {
    dataokay=false;
    cout<<"10 - 3000 are the company min and max distances\n";
     }

    if(dataokay)
    {

     if(weight<=2)
     rate = RATE1;
     else if(weight > 2 && weight<=6)
     rate= RATE2;
           else if(weight>6 && weight<=10)
           rate = RATE3;
                  else
                  rate = RATE4;


     distanceRange = ceil(distance/500);
	}
     double cost = rate * distanceRange;

     cout<<"Cost = " << cost;
	 system("pause");
return 0;

}
    