#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  int x,n,i=0;
  float sum=0;
  clrscr();
  cout<<"enter x and n";
  cin>>x>>n;
  for(i=1;i<=n;i++)
    sum = sum +i/pow(x,i);
  cout<<"\n sum="<<sum;
  getch();
}