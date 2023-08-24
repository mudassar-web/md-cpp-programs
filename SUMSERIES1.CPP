#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  int x ,n ,i=1 ,j=2;
  float sum1=0 ,sum2=0 ,ans=0;
  cout<<"enter x and n:";
  cin>>x>>n;
  for(i=1;i<=n;i=i+2)
  {
    sum1=sum1+(i*pow(x,i));
  }
  for(j=2;j<=n;j=j+2)
  {
    sum2=sum2-(i*pow(x,i));
  }
  ans=sum1+sum2;
  cout<<"\n answer="<<ans;
  getch();
}
