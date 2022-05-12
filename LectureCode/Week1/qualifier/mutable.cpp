// qualifiers.cpp  by Mufleh Al-Shatnawi, SDDS Seneca College
// updated on May , 2020

/*
Ordinarily, when you create a const object, you want a guarantee 
that none of its member data can be changed. However, 
a situation occasionally arises where you want to create const objects 
that have some specific member data item that needs to be modified despite 
the object’s constness.

It’s like what happens when your bank sells your mortgage to  another bank; 
all the terms of the mortgage are the same, but the owner is different.


*/
#include <iostream>
#include <string>
using namespace std;

class A {
    int amount;  // amount is related to constant 
    mutable string name; // this can be changed 
public:
    A (int amt , string aname): amount(amt),name(aname) {}
    void setAmount(int amt) { //change the amount
        this->amount = amt;
    }
    void setName(string name) const { //change the name 
        this->name = name;
    }
    void setName(string name)  { //change the name 
        this->name = name;
    }
    int getAmount() const { return amount; }
    string getName() const { return name; }
};



//int main() {
//
//    const A a(40, "aaaaaa");
//    //A a(40, "aaaaaa");
//    cout << a.getAmount() << " , " << a.getName() << endl;
//
//    //a.setAmount(50);//can’t do this to const obj
//    a.setName("bbbbbb");
//    cout << a.getAmount() << " , " << a.getName() << endl;
//
//    return 0;
//}
