#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
ifstream i;
ofstream o,o1;
int j=0;
char ch;
char a[]={'a','b','c','d','e','f','g','h','i','j'};
clrscr();
cout<<"\nFile read Program:"<<endl;
i.open("mydata.txt");
o.open("newdata.txt",ios::app);
o1.open("alpha.txt",ios::out);
while(!i.eof())
{
	ch=i.get();
	cout<<ch;
	o.put(ch);
}
while(j<=10)
{
	o1.put(a[j]);
	o1.put('\n');
	j++;
}
cout<<"\nFile write complete.";
i.close();
o.close();
o1.close();
getch();
}