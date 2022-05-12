
//#include"eHh.h"
#include"ehb.h"
#include <iostream>
using namespace std;
extern int variable;
void function2() {
	//variable = 345;
	cout << "inside function2,  Value of variable: " << variable << endl;
	cout << "inside function2, Address of variable: " << &variable << endl;
}