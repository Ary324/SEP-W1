// Class Functions - Implementation
 // classFunctioncpp

#include <iostream>
#include "classFunction.h"

unsigned Horse::noHorses = 0;

Horse::Horse(unsigned a) : age{ a }, no{ ++noHorses } {}
void Horse::display() const {
    std::cout << "Horse " << no <<
        " is " << age << " years old\n";
}

Horse::~Horse() { noHorses--; }

unsigned Horse::howMany() { 
    //age = 45;
    return noHorses; }