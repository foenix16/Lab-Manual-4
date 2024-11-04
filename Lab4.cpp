#include<iostream>
using namespace std;

void add(int num1,int num2)
{
int add;
add=num1+num2;
cout<<add;
}

void mul(int num1, int num2)
{
int mul;
mul=num1*num2;
cout << mul;
}

void division(int num1,int num2)
{
int division;
division=num1/num2;
cout << division;
}

void sub(int num1,int num2)
{
int sub;
sub=num1-num2;
cout<< sub;
}

main()
{
int num1,num2;
char op;
cout << " Enter 1st num : " ;
cin >> num1;
cout << "Enter 2nd num :" ;
cin >> num2;
cout << " Enter an operator(+,-,*,/):";
cin >> op;

if(op == '+')
{
add(num1,num2);
}

if(op == '-')
{
sub(num1,num2);
}

if(op == '*')
{
mul(num1,num2);
}

if(op =='/')
{
division(num1,num2);
}
}
