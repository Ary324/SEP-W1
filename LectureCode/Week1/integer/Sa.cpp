// Mufleh Al-Shatnawi, Seneca -SDDS
// May, 2020


#include<iostream>
using namespace std;

// a byte is 8 bits
constexpr size_t byte = 8;
//size_t  y = 8;

int main()
{
    cout << "sizeof char in byte is: " << sizeof(char)  << endl;
    cout << "sizeof char in bits is: "<< sizeof(char) * byte<<endl;
    cout << "sizeof short int in bits is: " << sizeof(short int) * byte << endl;
    cout << "sizeof int in bits is: " << sizeof(int) * byte << endl;
    cout << "sizeof long int in bits is: " << sizeof(long int) * byte << endl;
    cout << "sizeof long long int in bits is: " << sizeof(long long int) * byte << endl;


    int a, b, c, d, e;

    a = 91;   // decimal
    b = 0133; // octal - note the leading 0
    c = 0x5b; // hexadecimal - note the leading 0x
    d = 0X5B; // hexadecimal - note the leading 0X 
    e = 0b1011011; // binary value 
    cout << "sizeof (a) in bits is: " << sizeof(a) * byte << endl;
    cout << "(a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", e = " << e << ")" << endl;


    //long int a, b, c, d,e;
    ////long  a, b, c, d,e;

    //a = 91L;   // long: L or l
    //b = 0133L; // octal - long: L or l
    //c = 0x5bL; // hexadecimal - long: L or l
    //d = 0X5BL; // hexadecimal - long: L or l
    //e = 0b1011011L; // binary value 
    //cout << "sizeof (a) in bits is: " << sizeof(a) * byte << endl;
    //cout << "(a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", e = " << e << ")" << endl;

    //long long int a, b, c, d, e;
    ////long long  a, b, c, d, e;

    //a = 91LL;   // long: LL or ll
    //b = 0133LL; // octal - long: LL or ll
    //c = 0x5bLL; // hexadecimal - long: LL or ll
    //d = 0X5BLL; // hexadecimal - long: LL or ll 
    //e = 0b1011011LL; // binary value 
    //cout << "sizeof (a) in bits is: " << sizeof(a) * byte << endl;
    //cout << "(a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", e = " << e << ")" << endl;



    return 0;
}