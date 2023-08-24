#include <iostream.h>
#include<conio.h>

class A
{
    public:
      void display()
      {
          cout<<"Base class content.";
      }
};

class B : public A
{

};

class C : public B
{
 
};

void main()
{
    C c;
    c.display();
    getch();
}