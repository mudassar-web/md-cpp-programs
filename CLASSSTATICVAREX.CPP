#include<iostream.h>
#include<conio.h>
class counter
{
	public:
	static int count;
	public:
	void incr(void);
	void show();
};
void counter::incr()
{
	count++;
}
void counter::show()
{
	cout<<count<<endl;
}
void main()
{
	counter c,c1;
	clrscr();
	c.incr();
	c.show();
	c1.incr();
	c1.show();
	getch();
}