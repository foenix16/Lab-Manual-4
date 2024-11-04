#include<iostream>
using namespace std;

void eligibility(int age)
{
if(age>=18)
cout<<"You are eligible to vote.";
}

main()
{
int age;
cout<<"Enter your age :" ;
cin >> age;
eligibility(age);
}