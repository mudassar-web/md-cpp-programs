#include<iostream.h>
#include<conio.h>
void main()
{
     int a[100];
     int i,n,large;
     clrscr();
     cout<<"how many numbers:";
     cin>>n;
     for(i=0;i<=n-1;i++)
     {
	  cin>>a[i];
     }
     large=a[0];
     for(i=0;i<=n-1;i++)
     {
	 if(large<a[i])
	 {
		large=a[i];
	 }
     }
     cout<<"largest value="<<large;
     getch();
}