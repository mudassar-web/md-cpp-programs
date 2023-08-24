/*
* Program that converts between kilometers and miles.
* Illustrates type conversion from a class type
* to a built-in type.
* http://www.tech-faq.com
*/
#include<iostream.h>
#include<conio.h>
//using namespace std;
class DistConv
{
private:
 int kilometers;
 double meters;
 const static double kilometersPerMile;
public:
 // This function converts a built-in type (i.e. miles) to the
 // user-defined type (i.e. DistConv)
 DistConv(double mile) // Constructor with one
 // argument
 {
 double km = kilometersPerMile * mile ; // converts miles to
 //kilometers
 kilometers = int(km); // converts float km to
 //int and assigns to kilometer
 meters = (km - kilometers) * 1000 ; // converts to meters
 }
 DistConv(int k, float m) // constructor with two
 // arguments
 {
 kilometers = k ;
 meters = m ;
 }
 // ********Conversion Function************
 operator double() // converts user-defined type i.e.
 // DistConv to a basic-type
 { // (double) i.e. meters
 double K = meters/1000 ; // Converts the meters to
 // kilometers
 K += double(kilometers) ; // Adds the kilometers
 return K / kilometersPerMile ; // Converts to miles
 }
 void display(void)
 {
 cout<<"\n"<<kilometers<<" kilometers and "<<meters<<" meters";
 }
}; // End of the Class Definition
const double DistConv::kilometersPerMile = 1.609344;
void main()
{
 DistConv d1 = 5.0 ; // Uses the constructor with one argument
 DistConv d2( 2, 25.5 ); // Uses the constructor with two arguments
 double ml = double(d2) ; // This form uses the conversion function
 // and converts DistConv to miles
 clrscr();
 cout << "\n2.255 kilometers = " << ml << " miles\n" ;
 ml = d1 ; // This form also uses conversion function
 // and converts DistConv to miles
 d1.display();
 cout << " = " << ml << " miles\n" ;
 getch();
}