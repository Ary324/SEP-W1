// Structs with Unions
 // struct_union.cpp

#include <iostream>
#include <string>
using namespace std;
enum ProductId { sku, upc };

typedef struct {
    ProductId id;
    union { // some have skus, some upcs
        int  sku;
        char upc[13];
    } code;
} Product;

int main() {
    Product p[2];
    cout << "Alignment  of product: " << alignof(Product) << endl;
    cout << "size of product Number: " << sizeof(p[0]) << endl;
    cout << "Alignment  of ProductId: " << alignof(ProductId) << endl;
    //	cout << "size of number1: " << sizeof(number1) << endl;
    //	cout << "size of number2: " << sizeof(number2) << endl;
    p[0].id = sku;
    p[0].code.sku = 4789;
    p[1].id = upc;
    string str = "012345678912";
    strcpy_s(p[1].code.upc, str.c_str());

    for (int i = 0; i < 2; i++)
        switch (p[i].id) {
        case sku:
            std::cout << p[i].code.sku << std::endl;
            break;
        case upc:
            std::cout << p[i].code.upc << std::endl;
            break;
        }
}