#include<iostream.h>
#include<conio.h>
#include<string.h>

class Student
{
 int rollno;
 char name[20];
 public:
 Student()
 {
  rollno=0;
  strcpy(name,"None");
 }
 Student(int x, char s[])
 {
  rollno=x;
  strcpy(name,s);
 }
 void showdata()
 {
	cout<<"\nRoll No="<<rollno;
	cout<<"\nName="<<name;
 }
//Destructor
 ~Student()
 {
  cout<<"\nDestructor called";
 }
};

void main()
{
 Student s1;
 Student s2(1,"Ismail");
 Student s3(2,"Mudassar");
 clrscr();
 s1.showdata();
 s2.showdata();
 s3.showdata();
 getch();
}