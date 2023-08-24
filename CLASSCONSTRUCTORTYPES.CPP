#include<iostream.h>
#include<conio.h>
class Cube
{
public:
int side;
public:
Cube()
 {
  side=10;
 }
//Parameterized Constructor
Cube(int x)
  {
   side=x;
  }

};

void main()
{
Cube c;
Cube c1(14);
Cube c2(22);
clrscr();
cout<<c.side;
cout<<c1.side;
cout<<c2.side;
getch();
}
