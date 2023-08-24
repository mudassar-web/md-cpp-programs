#include<iostream.h>
#include<conio.h>
void main()
{
      int a[2][2],b[2][2],c[2][2],i,j;
      clrscr();
      cout<<"enter elements of a=";
      for(i=0;i<2;i++)
      {
	  for(j=0;j<2;j++)
	  {
	      cin>>a[i][j];
	  }
      }
      cout<<"enter elements of b=";
      for(i=0;i<2;i++)
      {
	  for(j=0;j<2;j++)
	  {
	      cin>>b[i][j];
	  }
      }

      for(i=0;i<2;i++)
      {
	  for(j=0;j<2;j++)
	  {
	      c[i][j]=a[i][j]+b[i][j];
	  }
      }

      cout<<"addition of a and b\n";
      for(i=0;i<2;i++)
      {
	  for(j=0;j<2;j++)
	  {
	      cout<<c[i][j]<<"\t";
	  }
	  cout<<"\n";
      }
      getch();
}


