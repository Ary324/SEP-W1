// Function-Like Macros
// fnMacrosTriangle.cpp

#include <iostream>
using namespace std;
#define PI 3.141592654
#define CIRCLE_AREA( x ) ( ( PI ) * ( x ) * ( x ) )
#define RECTANGLE_AREA( x, y )  ((x)*(y)) 
#define TRIANGLE_AREA(A, B) 0.5 * B * A
#define SQR(X) ((X)* (X))
#define CUBE(y) SQR(y)* (y) 

#define greater(m,n)(m>n) ? (m)	\
			: (n);

#define INCREMENT(x) x++

#define MULT(x, y) (x) * (y)
//int main() {
//    double trianglearea = TRIANGLE_AREA(2.5, 4);
//    std::cout << "TRIANGLE Area(2.5, 4) is " << trianglearea << std::endl;
//    cout << "====================\n";
//    int a = 2, b = 3;
//    double rectanglearea = RECTANGLE_AREA(1, 2);
//    
//    std::cout << "RECTANGLE Area (1,2) is " << rectanglearea << std::endl;
//    cout << "====================\n";
//    rectanglearea = RECTANGLE_AREA(a+1, b+2);
//    std::cout << "RECTANGLE Area (a+1,b+2) is " << rectanglearea << std::endl;
//
//    int radius=1;
//    cout << "====================\n";
//    double circlearea = CIRCLE_AREA (radius);
//    std::cout << "CIRCLE_AREA (1) is " << circlearea << std::endl;
//    #undef PI
//    //It is now	invalid to use PI, thus we cannot use the next line.
//    //cout << endl << "Perimeter  of Circle is : " <<  2 * PI * radius;
//    cout << "====================\n";
//    cout << endl << "Area of the Sphere of Radius " << \
//        radius << " is: " << 4 / 3.0 * 3.14 * CUBE(radius) << endl;
//    cout << "====================\n";
//    int n1 = 4, n2 = 7;
//    int g = greater(n1, n2);
//    cout << endl << "Greater of the two numbers is: " << g <<endl;
//
//}