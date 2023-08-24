//Aim : Area and Perimeter of Rectangle
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int l,b,area,per;
 cout<<"Enter length and breadth:";
 cin>>l;
 cin>>b;
 cout<<l<<b;
 area=l*b;
 per=2*(l+b);
 cout<<"\narea="<<area;
 cout<<"\nperimeter="<<per;
 getch();
}