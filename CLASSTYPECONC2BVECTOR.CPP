#include<iostream.h>
#include<conio.h>
//class to basic
class vector
{
		int v[20];//={1,2,3,4,5,2,3,20};
		public:
		vector()
		{
			v[]={1,2,3,4,5,6,7,8,9,10};
		}
		vector operator double()
		{
			int i;
			double sum=0;
			for(i=0;i<=8;i++)
			{
				sum=sum+v[i]*v[i];
			}
			return sqrt(sum);
		}
};
void main()
{
	vector v1;
	double len;
	clrscr();
	len=v1;
	//Or
	//len=(double)v1;
	cout<<"\nlen of vector="<<len;
	getch();
}