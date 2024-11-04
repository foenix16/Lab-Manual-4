#include<iostream>
using namespace std;

void calculate(int num1);

main()
{
int num1;
cout << "Enter the value in inches to be converted in feet: ";
cin >> num1;
calculate(num1);
}

void calculate(int num1)
{
int feet;
feet=num1/12;
cout<<"Inches to Feet : " ;
cout << feet;
}