#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  cout<<"\nEnter integer=";
  cin>>a;
  if(a<0)
  {
	cout<<"enter only positive nos.";
	exit(1);
  }
  cout<<"Square="<<a*a<<endl;
  if(a%2==0)
  {
    cout<<a<<" is even"<<endl;
  }
  else
  {
    cout<<a<<" is odd"<<endl;
  }
  getch();
}