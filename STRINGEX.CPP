#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
  char s1[]="Hello ";
  char s2[]="Ismail";
  char target[20];
  char c1[]="Ferry";
  char c2[]="Jerry";
  int i,j,k,l;
  clrscr();
  cout<<"Length="<<strlen(s1)<<endl;
  cout<<"Length="<<strlen(s2)<<endl;
  strcpy(target,s2);
  cout<<"target="<<target<<endl;
  strcat(s1,s2);
  cout<<"concatenation="<<s1<<endl;
  i=strcmp(c1,"Ferry");
  j=strcmp(c1,c2);
  k=strcmp(c2,c1);
  l=strcmp(c2,"Jerry");
  cout<<"comparison="<<endl;
  cout<<"  i="<<i<<"  j="<<j<<"  k="<<k<<"  l="<<l<<endl;
  cout<<s1<<endl;
  strrev(s1);
  cout<<s1<<endl;
  getch();
}
