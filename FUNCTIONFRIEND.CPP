#include<iostream.h>
#include<conio.h>
class  base
{
   int val1,val2;
   public:
    void set()
    {
       cout<<"\nEnter two values:";
       cin>>val1>>val2;
    }
    void get()
    {
       cout<<"\nValues:"<<val1<<" ,"<<val2;
    }
    friend float mean(base ob);
};
float mean(base ob)
{
   return float(ob.val1+ob.val2)/2;
}
void main()
{
    clrscr();
    base obj;
    obj.set();
    obj.get();
    cout<<"\nMean value is : "<<mean(obj);
    getch();
}