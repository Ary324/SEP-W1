// qualifiers.cpp  by Mufleh Al-Shatnawi, SDDS Seneca College
// updated on May , 2020
#include <iostream>
using namespace std;

class S {
public:
    int static_value() {
        static int x = 7;
        //int x = 7;
        return ++x;
    }
};

int func() {
    static int x = 7;
    //int x = 7;
    return ++x; // it is rvalue  
}

int main() {

    const static int j = 345;
    //j = 8;

    //int i = 42;
    //i = func(); // what the value i  = 8 
    //cout << "The integer is " << i << endl;
    //i = func(); // i =  9 
    //cout << "The integer is " << i << endl;
    //i = func(); // 10 
    //cout << "The integer is " << i << endl;
    //i = func();
    //cout << "The integer is " << i << endl;


    S a, b, c;
    cout << "a.static_value() is " << a.static_value() << endl;
    cout << "b.static_value() is " << b.static_value() << endl;
    cout << "c.static_value() is " << c.static_value() << endl;


//
    return 0;
}
