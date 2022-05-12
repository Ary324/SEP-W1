#include <iostream>
using namespace std;


union Number
{
	int n;
	double x;
};

//int main() {
//	Number number1, number2;
//	number1.n = 12345; // Storing an integer
//	number1.n *= 3; // and multiply by 3.
//	number2.x = 2.77; // Floating point number
//	/*
//	The programmer must ensure that the current content of the union is interpreted correctly.
//	This is normally achieved using an additional type field that identifies the current
//	content.
//	*/
//
//	/*
//	The size of a union type object is derived from the longest data member, 
//	as all data members begin at the same memory address. 
//	If we look at our example, the union Number, 
//	this size is defined by the double member, which defaults to 8 ==sizeof(double) byte.
//	*/
//	cout << "Alignment  of union Number: " << alignof(Number) << endl;
//	cout << "size of union Number: " << sizeof(Number) << endl;
//	cout << "size of number1: " << sizeof(number1) << endl;
//	cout << "size of number2: " << sizeof(number2) << endl;
//}



