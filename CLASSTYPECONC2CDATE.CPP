//class to class
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
class date
{		char dt[10];
		public:
			date()
			{
			strcpy(dt,"\0");
			}
			date(char *s)
			{
			strcpy(dt,s);
			}
			void display()
			{
			cout<<dt;
			}
};

class dmy
{
		int day,mth,yr;
		public:
		dmy()
		{	day=mth=yr=0;	}
		dmy(int d,int m,int y)
		{	day=d; mth=m;yr=y;   }
		operator date()
		{	char str[9],temp[3];
			itoa(day,str,10);
			strcat(str,"/");
			itoa(mth,temp,10);
			strcat(str,temp);
			strcat(str,"/");
			itoa(yr,temp,10);
			strcat(str,temp);
			return (date(str));
		}
void display()
{
	cout<<day<<"\t"<<mth<<"\t"<<yr;
}
};
void main()
{
	date d1;
	dmy d2(9,9,16);
	clrscr();
	d1=d2;
	//d1=date(d2);
	cout<<"d1=";
	d1.display();
	cout<<"\nd2=";
	d2.display();
	getch();
}