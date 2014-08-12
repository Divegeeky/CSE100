#include<iostream>
using namespace std;
#include "Account.h"
int main()
{
Account a1;
Account a2(500);
a1.deposit(200);
a2.withdraw(50);
a1.addInterest(0.2);
cout<<a1.getBalance();
cout<<"\n";
cout<<a2.getBalance();
system("pause");
return 0;
}