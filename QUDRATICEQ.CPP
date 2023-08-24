//Aim : Calculate qudratic equation.
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
  clrscr();
  float s,a,b,c,x,y,z;
  cout<<"enter values for x, y,a & b:";
  cin>>x>>y>>a>>b;
  z=pow(x,2)+(2*x*y)+pow(y,2);
  c=z+(a*b);
  s=sqrt(4*a*c)+(b*b)/2*a;
  cout<<"\nz="<<z;
  cout<<"\nc="<<c;
  cout<<"\ns="<<s;
  x=4;
  y=5;
  z=x+(--y*2)+x--+--y;
  cout<<"\nx="<<x;
  cout<<"\ny="<<y;
  cout<<"\nz="<<z;
  getch();
}