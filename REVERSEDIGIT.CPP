#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  long num,rem,rev=0;
  cout<<"enter no.";
  cin>>num;
  while (num>0)
  {
    rem=num%10;
    rev=(rev*10)+rem;
    num=num/10;
  }
  cout<<"reverse="<<rev;
  getch();
}