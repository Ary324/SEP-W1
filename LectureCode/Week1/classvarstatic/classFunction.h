#pragma once
// Class Functions - Header
 // classFunction.h

class Horse {
    unsigned age; // instance variable 
    unsigned no; // instance variable 
    static unsigned noHorses; // static memeber data 
public:
    Horse(unsigned a);
    void display() const;
    ~Horse();
    static unsigned howMany(); // static member function 
};