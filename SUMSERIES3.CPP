#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  int x,n,i=1,j=2;
  float sum1=0;
  cout<<"enter x and n:";
  cin>>x>>n;
  for(i=1;i<=n;i++)
  {
	if(i%2==0)
	{
	  sum1=sum1-(i*pow(x,i));
	}
	else
	{
	  sum1=sum1+(i*pow(x,i));
	}
  }
  cout<<"\n answer="<<sum1;
  getch();
}
