#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
  int n,i;
  clrscr();
  cout<<"Enter a number";
  cin>>n;
  for(i=1;i<=10;i++)
  cout<<n<<" x "<<i<<"="<<setw(4)<<n*i<<endl;
  getch();
}
