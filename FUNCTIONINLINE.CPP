#include<iostream.h>
#include<conio.h>
int square(int r);
void main()
{
  int number=5;
  cout<<"square of the given number is"<<square(number);
  getch();
}
inline int square(int a)
{
  return(a*a);
}