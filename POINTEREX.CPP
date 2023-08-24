#include<iostream.h>
#include<conio.h>
void main()
{
	int a=5;
	int *p;
	clrscr();
	p=&a;
	*(p+1)=6;
	*(p+2)=*p+*(p+1);
	cout<<"Addition="<<*(p+2)<<endl;
	cout<<"Double="<< *(p+2)*2<<endl;
	getch();
}