// Plain Enumerations
 // plain_enum.cpp

#include <iostream>
//using namespace std;
// define the Colour type
enum Colour { white, red, green, blue }; 
// white =0 , red=1, green =2, blue=3

//std::ostream& operator<<(std::ostream& os, const Colour& colour) {
//    std::string str;
//    switch (colour) {
//    case white:
//        str = "white";
//        break;
//    case red:
//        str = "red";
//        break;
//    case green:
//        str = "green";
//        break;
//    case blue:
//        str = "blue";
//        break;
//    default:
//        str = "none";
//    }
//    os << str.c_str();
//    return os;
//}

//int main() {
//    Colour wall, ceiling, door; // define Colour variables 
//    wall = red;
//    ceiling = white;
//    door = green;
//    std::cout << wall << ' '
//        << ceiling << ' ' << door << std::endl;
//    return 0;
//}