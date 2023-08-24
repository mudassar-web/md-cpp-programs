#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[]={1,3,21,-5,-6,-2,9,81};
  int i;
  for(i=0;i<=7;i++)
  {
    if(a[i]>=0)
      cout<<a[i]<<"\n";
  }
  getch();
}