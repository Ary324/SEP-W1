#include<iostream>
#include "geo1.h"
#include "geo2.h"
/*
This looks like a redefinition for geo namespace, 
but it’s really just a continuation of the same namespace definition.
*/

using namespace std;

void func() {
	using namespace geo;
	cout <<"Inside func() value of PI: "<< PI << endl;
	cout << "Inside func() value of circumf(2): "<<circumf(2) << endl;

}

//int main() {
//
//	using namespace geo;
//	cout << PI << endl;
//	cout << circumf(3) << endl;
//	cout << areac(3) << endl;
//	/*>>>>>>>>>>>>>>>>>>>>>*/
//	// ego inside func only 
//	func();
//	///*>>>>>>>>>>>>>>>>>>>>>*/
//
//	cout << PI << endl;
//	cout << circumf(2) << endl;
//
//
//	return 0;
//}