//Aim : BITWISE Operator implementation.
#include<iostream.h>
#include<conio.h>
void main()
{
  int a=5,b=2,c=12,d;
  clrscr();
  cout<<"\na AND b="<<(a&b);
  cout<<"\na OR b="<<(a|b);
  cout<<"\na XOR b="<<(a^b);
  d=c<<1;
  cout<<"\n12<<1="<<d;
  d=c>>1;
  cout<<"\n12>>1="<<d;
  getch();
}