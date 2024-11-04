#include<iostream>
using namespace std;
void HowManyStickers(int num)
{
int Howmanystickers;
Howmanystickers=6*(num*num);
cout<<"Number of stickers need are:"<<Howmanystickers;
}
main()
{
int num;
cout<<"Enter the side length of the rubik cube:";
cin >> num;
HowManyStickers(num);
}