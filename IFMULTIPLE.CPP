#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int no, n=0, p=0, z=0;
  for(int i=0;i<10;i++)
  {
    cout<<"\n Enter a number";
    cin>>no;
    if(no>0)
      p++;
    if(no<0)
      n++;
    if(no==0)
      z++;
  }
  cout<<"\n no. of positive no."<<p;
  cout<<"\n no. of negetive no."<<n;
  cout<<"\n no. of zero"<<z;
  getch();
}