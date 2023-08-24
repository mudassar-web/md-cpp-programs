#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int a[2][2],b[2][2],c[2][2];
  int i,j,m,n;
  cout<<"enter nos. in a";
  for(i=0;i<=1;i++)
  {
    for(j=0;j<=1;j++)
    {
      cin>>a[i][j];
    }
  }
  cout<<"\nenter nos. in b";
  for(i=0;i<=1;i++)
  {
    for(j=0;j<=1;j++)
    {
     cin>>b[i][j];
    }
  }
  for(i=0;i<=1;i++)
  {
    for(j=0;j<=1;j++)
      c[i][j]=a[i][j]-b[i][j];
  }
  for(i=0;i<=1;i++)
  {
    for(j=0;j<=1;j++)
    {
      cout<<c[i][j]<<"\t";
    }
    cout<<endl;
  }
  getch();
}