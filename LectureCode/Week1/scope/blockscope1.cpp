// blockscope1.cpp by Mufleh Al-Shatnawi, SDDS Seneca College
// updated on May 15, 2020
#include <iostream>
using namespace std;

/*
Global scope refers to the entire region of a program. 
Names with global scope include class and function identifiers not defined in any other scope. 
A namespace localizes names of otherwise global scope.

*/
const double PI = 3.14159; // begin of PI scope 

/*
declarations that are not definitions include function prototypes, 
parameter declarations in function prototypes, and forward class declarations.
*/
double circleArea(double);

int main() {
	 
	double radius;// begin of radius scope
	cout << "Enter a radius: ";
	cin >> radius;
	
	double area = circleArea(radius);//-> begin of area scope 
	cout << "The area is " << area;

	return 0;
	//-> end of area scope 
	//end of radius scope
}


double circleArea(double r) { // begin of r scope 
	//double r = 9;
	return PI*r*r;
}//end of r scope 
// end of scope of PI