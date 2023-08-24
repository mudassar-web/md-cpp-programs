#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,rem,sum=0;
  cout<<"enter no.";
  cin>>num;
  while (num>0)
  {
    rem=num%10;
    sum=sum+rem;
    num=num/10;
  }
  cout<<"sum="<<sum;
  getch();
}