// Mufleh Al-Shatnawi, Seneca -SDDS
// May, 2020
#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

string func() {
    return string("Object-Oriented Software Development using C++");
}

int main() {
    auto x = func();
    cout << "value of x is : " << x << endl;
    cout << "Type of x: " << typeid(x).name() << endl;
    if (typeid(x) == typeid(string)) {
        cout << "the type of x is string"<<endl;
    }
    else {
        cout << "the type of x is auto" << endl;
    }
    return 0;
}