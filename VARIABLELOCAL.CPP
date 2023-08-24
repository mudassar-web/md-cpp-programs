#include <iostream.h>
#include<conio.h>

int a=10;
void main()
   {
      int a=15;
      clrscr();
      cout<<"\n local a="<<a<<"global a="<<::a;
      ::a=20;
      cout<<"\n local a="<<a<<"global a="<<::a;
      getch();

   }
