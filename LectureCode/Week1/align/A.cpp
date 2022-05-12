#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

// A is allocated at 4-byte boundaries
struct A {
    int n;  // size 4 alignment 4
    char c; // size 1 alignment 1
};          // size 8 alignment 4

// B is allocated at 16-byte boundaries
struct alignas(16) B {
    int n;  // size 4 alignment 4
    char c; // size 1 alignment 1
};          // size 8 alignment 16

int main() {
    A a[]{ 1, 'a', 2, 'b', 3, 'c' };
    std::cout << "align of A = "
        << alignof(A) << std::endl;
    for (int i = 0; i < 3; ++i) { // i = 0, 1, 2
        std::cout << &a[i] << ": " // & address element 
            << a[i].n << ", " << a[i].c << std::endl;
    }

    B b[]{ 1, 'a', 2, 'b', 3, 'c' };
    std::cout << "align of B = "
        << alignof(B) << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << &b[i] << ": "
            << b[i].n << ", " << b[i].c << std::endl;
    }
}