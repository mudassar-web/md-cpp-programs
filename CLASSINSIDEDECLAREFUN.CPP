//Aim : Class Implementation
#include<iostream.h>
#include<conio.h>
class number
{
	//public:
	int a,b;
	public:
	//inside declaration
	void setdata(int x,int y)
	{
		a=x;
		b=y;
	}
	void getdata()
	{
		cout<<"a="<<a<<" ,b="<<b<<endl;
	}
	void sum()
	{
		cout<<"Sum="<<a+b<<endl;
	}
};
void main()
{
	number n,n1,n2;
	clrscr();
	n.setdata(5,4);
	n.getdata();
	//n.a=99;
	//n.b=98;

	//n.getdata();
	n.sum();
	n1.setdata(7,9);
	n1.sum();
	n2.setdata(567,999);
	n2.getdata();
	getch();
}