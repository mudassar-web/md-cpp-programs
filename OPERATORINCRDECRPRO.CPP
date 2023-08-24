//Aim : Working with increment and decrement operator.
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a,b,n;
  cout<<"enter 2 nos.";
  cin>>a>>b;
  n=(++a)*(++b);
  cout<<"\n preincrement product="<<n;
  n=(a++)*(b++);
  cout<<"\n postincrement product="<<n;
  getch();
}