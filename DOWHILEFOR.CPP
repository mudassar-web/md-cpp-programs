//Aim : WOrking with do..while and for loop.
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int i;
  i=1;
  do
  {
    cout<<i<<"\n";
    i++;
  }while(i<=10);
  cout<<"-------------------------";
  for(i=1;i<=10;i++)
  {
    cout<<i<<"\n";
  }
  getch();
}