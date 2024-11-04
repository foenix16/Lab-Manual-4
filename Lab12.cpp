#include<iostream>
using namespace std;

void PayableAmount(string day,double amount)
{
if(day=="sunday")
{
amount-= (amount*0.10);
cout<<"Payable Amount is :$" << amount;
}

else
{
amount-= (amount*0.05);
cout<<"Payable Amount is :$" << amount;
}
}
main()
{
string day;
double amount;
while(true)
{
cout<<"Enter the day of Purchase : " ;
cin >> day;
cout << " Enter the total amount :$";
cin >> amount;
PayableAmount(day,amount);
}
}