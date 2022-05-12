// Mufleh Al-Shatnawi, Seneca -SDDS
// May, 2020


#include<iostream>
#include<iomanip>
using namespace std;

// a byte is 8 bits
constexpr size_t byte = 8;


int main() {

	cout << "sizeof float in bits is: " << sizeof(float) * byte << endl;
	cout <<  "sizeof double in bits is: " <<  sizeof(double) * byte << endl;
	cout <<  "sizeof long double bits is: " <<  sizeof(long double) * byte << endl;

	
	float a = 0.9, e=5.123457891234; // C-style
	double b{ 1.3e2 };// universal form braces-enclosed list
	long double c{ 0.0 };// universal form braces-enclosed list
	double z{ 1.0 };

	//long double c=5.69;
	for (int i = 1; i < 10; i++) {
		c += 0.1;
	}

	cout.precision(12);
	cout << "value of a : " << setw(15) << a << endl;
	cout << "value of e : " << setw(15) << e << endl;
	cout << "value of b : " << setw(15) << b << endl;
	cout << "value of c : " << setw(15) << c << endl;


	/*int x = e;
	cout << "Assigned float to int (chopped off) the value " << x << endl;*/
	//int x{ 5.34 };  // error 
	//cout << "Assigned float (5.34) to int (chopped off) the value " << x << endl;

	/*if ((c-0.9)<0.0001)
		cout << "c==0.9" << endl;
	else
		cout << "c != 0.9" << endl;*/

	/*if (c == 0.9) {
		cout << "c==0.9" << endl;
	}
	else {
		cout << "c != 0.9" << endl;
	}*/
	//if (c == a) {
	//	cout << "c==a" << endl;
	//}
	//else {
	//	cout << "c != a" << endl;
	//}

}