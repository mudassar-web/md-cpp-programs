#include<iostream.h>
#include<conio.h>
#include<string.h>
//basic to class
class String
{
	private:
		char s[100];
	public:
		String(char *);
		void display();

};
//outside declaration
String::String (char *a)
{
//int len=strlen(a);
//s=new char[len+1];
strcpy(s,a);
}

void String::display()
{
	cout<<"\nString="<<s;
}

void main()
{
char name[]="abcd";
String s1(name);
String s2("");
clrscr();
s1.display();
s1="Mudassar";//s1=string(name)
s1.display();
s2="Ismail";
s2.display();
getch();
}