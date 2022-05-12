//#include"eHh.h"

#include"eha.h"
#include <iostream>
using namespace std;
extern int variable;
void function1() {
	variable = 10;
	cout << "inside function1,  Value of variable: " << variable << endl;
	cout << "inside function1, Address of variable: " << &variable << endl;
}