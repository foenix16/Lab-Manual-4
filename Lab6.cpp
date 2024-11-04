#include<iostream>
using namespace std;

void PorF(int score)
{
if(score>50)
cout<<"You are pass";
else 
cout<<"You are fail.";
}

main()
{

int score;
cout<<" Enter your score:" ;
cin >> score;
PorF(score);

}