#include<iostream>
using namespace std;
void EvenorOdd(int num)
{
if(num%2==0)
cout<<"Even.";
else
cout<<"Odd.";
}
main()
{
int num;
cout<<"Enter any number:";
cin>> num;
EvenorOdd(num);
}