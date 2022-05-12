// Unions
// union.cpp

#include <iostream>
#include <cstring>
#include<string>
using namespace std;

union Product { // some have skus, some have upcs 
    int sku;
    char upc[13];
};

//int main() {
//    Product cereal, tissue;
//
//    cereal.sku = 4789;
//    string str = "012345678955";
//    strcpy_s(tissue.upc, str.c_str() );
//    
//
//    cout << cereal.sku << endl;
//    cout << tissue.upc << endl;
//}