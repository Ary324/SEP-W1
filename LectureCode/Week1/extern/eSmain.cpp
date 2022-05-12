#include "eHh.h"
#include "eHa.h"
#include "eHb.h"

#include <iostream>
using namespace std;
extern int variable;
int main()
{
	function1();
	function2();
	variable = 500;
	cout << "inside main,  Value of variable: " << variable << endl;
	cout << "inside main,  Address of variable: " << &variable << endl;
	return 0;
}