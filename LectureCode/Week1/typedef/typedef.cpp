// typedef.cpp by Mufleh Al-Shatnawi, SDDS Seneca College
// updated on May, 2020
 #include <iostream>
using namespace std; 

typedef unsigned long unlong;
typedef unsigned int  unint;
typedef int* ptrInt;

typedef struct { double re, im; } COMPLEX;



 /*int main() {
     unlong p = 4;
     unlong r = 7;
     int value = 80;
     ptrInt q = &value;
     *q = 90;

     cout << ">>" << p << ", " << r << "<<" << endl;
     cout << *q << endl;

     COMPLEX z1, z2, * zp;
     z1.re = 2.0;  z1.im = 4.5;
     cout<< ">>" << z1.re << ", " << z1.im << "<<" << endl;
     zp = &z1; zp->im = 5.6;
     cout << ">>" << z1.re << ", " << z1.im << "<<" << endl;

	 
  
 }*/