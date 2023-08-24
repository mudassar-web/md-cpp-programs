#include<iostream.h>
#include<conio.h>
void minus(int &i);
char & rep(int);
char s[]="Hello Brother";
void main()
{
  clrscr();
  int x;
  x=10;
  float total=100;
  float &sum=total;
  cout<<x;
  minus(x);
  cout<<"\t"<<x<<endl;
  rep(5)='X';
  cout<<s<<endl;
  sum+=10;
  cout<<"\nTotal="<<total;
  total*=2;
  cout<<"\nSum="<<sum;
  getch();
}
void minus (int &i)
{
  i=-i;
  //i-=1;
  //i--;
}
char & rep(int i)
{
	return(s[i]);
}
