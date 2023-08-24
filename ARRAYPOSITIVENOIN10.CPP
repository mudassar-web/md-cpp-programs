  #include<iostream.h>
  #include<conio.h>
  void main()
  { clrscr();
    int i;
    int a[10];
    cout<<"enter numbers to check";
    for(i=0;i<10;i++)
    {
      cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
      if(a[i]>0)
	      cout<<a[i]<<"\n";
    }
    getch();
  }