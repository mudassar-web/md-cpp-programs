#include<iostream.h>
#include<conio.h>
class Data
{
 public:
 int a;
 void print()
 {
	cout << "a is "<< a<<endl;
 }
};

void main()
{
 Data d, *dp;
 dp = &d;     // pointer to object
 clrscr();
 int Data::*ptr=&Data::a;   // pointer to data member 'a'

 d.*ptr=10;
 d.print();

 dp->*ptr=20;
 dp->print();
 getch();
}