#include<iostream.h>
#include<conio.h>
void main()
{
  int a[5];
  int *p;
  clrscr();
  p=a;
  cout<<"enter elements of array";
  for(int i=0;i<5;i++)
  {
     cin>>a[i];
  }
  cout<<"array elements are";
  for(int j=0;j<5;j++)
  {
    cout<<*(p+j);
  }
  getch();
}