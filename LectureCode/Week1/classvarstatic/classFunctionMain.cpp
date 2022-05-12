// Class Functions - Application
 // classFunctionMain.cpp
/*
All data members of class scope to which a class function 
must be class variables. 
A class function may not refer to any instance variable.

*/
#include <iostream>
#include "classFunction.h"

int main() {
    
    std::cout << Horse::howMany() << " horses\n";


    {
        Horse silver(3), northernDancer(4); // 
        silver.display();
        northernDancer.display();
        std::cout << Horse::howMany() << " horses"
            << std::endl;
        std::cout << silver.howMany() << " horses"
            << std::endl;
        std::cout << northernDancer.howMany()
            << " horses" << std::endl;
    }
    std::cout << Horse::howMany() << " horses\n";
}