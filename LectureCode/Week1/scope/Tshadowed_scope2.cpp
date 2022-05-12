// Shadowed Scope
 // shadowed_scope.cpp

/*
A name declared within the scope of an identical name shadows 
the entity that has the broader scope.  
Avoiding the use of identical names improves readability.
*/
 #include <iostream>

 //int main() {
 //    int i; // scope of the outer i
 //    std::cout << "Enter i : ";
 //    std::cin >> i;
 //    if (i < 0) {
 //        int i = 4;  // shadows the outer i
 //        std::cout << i << std::endl;
 //    } 
 //    else {
 //        int i = -4; // shadows the outer i
 //        std::cout << "Else Block i= "<<i << std::endl;
 //    }   
 //    std::cout <<"Outer:"<< i << std::endl;
 //}