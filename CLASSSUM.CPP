#include<iostream.h>
#include<conio.h>
class sum
   {
      private:
	      int a,b;
      public:
	void setdata(int x,int y);
	void sum2();
  };
  void sum::setdata(int x,int y)
  {
     a=x;
     b=y;
  }
  void sum::sum2()
  {
     cout<<a+b;
  }
  void main()
  {
    sum s;
    clrscr();
    s.setdata(5,6);
    s.sum2();
    getch();
  }