#include<iostream>
#include<string>
using namespace std;

class Date
{
  private:
	int month;        // Holds the month number
	int day;          // Holds the day 
	int year;         // Holds the 4 digit year
	string name;      // Holds the month name
    void setName();   // This method will be used by other methods, not visible to outside
	

  public:
	// Constructors
	Date();
	Date(int, int, int);
    

	//  display dates
	void showDate1();
	void showDate2();
	void showDate3();
	void setDate(int m, int d, int y);

};