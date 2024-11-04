#include<iostream>
using namespace std;
void calculateFuel(double distance)
{
double fuel_needed= distance*10;
cout<<fuel_needed;
}
main()
{
double distance;
cout<<"Enter distance:";
cin>>distance;
calculateFuel(distance);
}