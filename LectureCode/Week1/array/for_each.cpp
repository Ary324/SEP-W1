// Range-Based for
// for_each.cpp

#include <iostream>
using namespace std;
int main() {
    //       0  1  2  3  4  5
    int a[]{ 1, 2, 3, 4, 5, 6 };
    
    for (auto e : a) {
        e += 4;     
    }
    // a[2] = {1, 2, 3, 4, 5, 6}
    /*for (auto e : a)
        cout << e << ' ';
    cout << endl;*/

    
    for (auto& e : a)
         e+=4;

    for (auto e : a)
        cout << e << ' ';
    cout << endl;

    /*for (auto& e : a)
        cout << e << ' ';
    cout << endl;*/
}