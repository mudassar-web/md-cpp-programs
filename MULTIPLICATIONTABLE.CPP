#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a,n;
  cout<<"Enter a number";
  cin>>n;
  for(a=1;a<=10;a++)
  {
    cout<<"\n"<<n<<" x "<<a<<" = "<<n*a<<"\n";
  }
  getch();
}