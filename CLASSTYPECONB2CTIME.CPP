#include<iostream.h>
#include<conio.h>
class time
{
		int hrs;
		int mins;
		public:
		time()
		{
		}
		time(int t)
		{
				hrs=t/60;
				mins=t%60;
		}
		void display()
		{
			cout<<hrs<<" hours "<<mins<<" mins\n";
		}
};
void main()
{
		time T1;
		int dur=105;
		clrscr();
		T1=dur;			
		//T1=time(dur);   int to class type
		T1.display();
		getch();
}