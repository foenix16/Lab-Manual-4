#include<iostream>
using namespace std;

void PayableAmount(string day,double amount)
{
if(day=="sunday")
amount-= (amount*0.10);
cout<<"Payable Amount is :$" << amount;
}

main()
{
string day;
double amount;
cout<<"Enter the day of Purchase : " ;
cin >> day;
cout << " Enter the total amount :$" ;
cin >> amount;
PayableAmount(day,amount);
}