// Mufleh Al-Shatnawi, Seneca -SDDS
// May, 2020
// Generic Pointer Type
 // void.cpp

#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int i{89};
    void* v = &i;
    int* j;
    char* c;
        
    j = static_cast<int*>(v);  // OK - j now holds the address of i 
    c = static_cast<char*>(v);
    cout <<"Address of i:"<<setw(10)<< &i << endl;
    cout <<"Value of j ptr:" << setw(10)<< j << endl;
    
    cout << "++++++" << endl;
    cout << setw(10)<< c << endl;
    cout << setw(10)<< *c << endl;



}
