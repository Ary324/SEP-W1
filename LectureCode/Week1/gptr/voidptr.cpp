#include <iostream>
using namespace std;

void copyMem(void* des, const void* src, unsigned int size) {
    char* cdes = static_cast<char*>(des); // cast as char pointer , assume one byte per char
    const char* csrc = static_cast<const char*>(src); // one byte 
    unsigned int i;
    for (i = 0; i < size; i++) {
        cdes[i] = csrc[i];
    }
}
//int main() {
//    int a = 24;
//    int b;
//    double c = 234.567;
//    double d;
//    copyMem(&b, &a, sizeof(a)); // number of bytes return by sizeof
//    copyMem(&d, &c, sizeof(c));
//    cout << b << endl;
//    cout << d << endl;
//    return 0;
//}