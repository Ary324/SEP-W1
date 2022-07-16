# Week10 Examples 

This week we will look at function pointers, function objects (functors) and *lambda expressions*. During the lab portion, we will look at linked lists and source code for a **stack** class and a **queue** class in preparation for `assignment 2`.

## Class Enumerator
It is good to associate certain enumerations with a certain class, therefore we have class enumerations. A simple example with a class enumerator can be seen at (Check **enumClass** directory): `enumClass.cpp`. 

## Recursion
Recursion occurs when a function calls itself. This may seem a little silly, but is in fact very useful when implementing *binary trees*. A recursive function has two parts - the *recursive part*, and the *base case*. As a function calls itself repeatedly, it eventually finds itself at the base case, in which case the recursion unwinds.

Many mathematical operations lend themselves to recursive programming. For instance, consider the factorial operation. This consists of a series of multiplications as follows:
`n! = n*(n-1)*(n-2)*(n-3) ... *2*1`

This could be rewritten as:
`n! = n*(n-1)!`

In C++, this is written as follows:
```cpp
    int factorial(int n) {
      if(n>1) return n * factorial(n-1);
      else    return 1;
    }
```  
An example of using recursion to calculate the factorial of a number can be found at (Check **Factorial** directory): `Factorial.cpp`. 

## A Function Pointer
A function pointer is very useful for threads and for interrupt-programming. One of the parameters in thread creation is a pointer to a function that will run as a thread. For instance, if you want to create a read thread for reading data packets from a network, you could create a function ReadThread and then invoke it on thread creation. Likewise, you might assign a callback function that needs to be run in case your program receives a signal from the operating system or an interrupt on a hardware pin. Your program will have a pointer to this callback function, which will be invoked on interrupt. JavaScript has the concept of a callback function which is invoked if, for instance, a button is clicked on your mouse.

- *Functions do exist in memory as binaries, and we can use a pointer to point to the beginning of a function in the same way we can use a pointer to point to an object or variable in memory*. An example of using a function pointer can be seen at (Check **FunctionPointer** directory): `ReportMarks.cpp`.

- Function pointers can also appear as an array of functions. The function pointer points to one of the functions in its array depending on the array index. An example of using an array of function pointers can be seen at (Check **FunctionPointer2** directory): `ReportMarks2.cpp`.

There is something in C++ called a *virtual table*. It will point to the correct function in a polymorphic arrangement. The C++ compiler uses a function pointer within itself to resolve which function should be called, ie `Base::PrintInfo()` or `Derived::PrintInfo()`:
```cpp
class Base {
    virtual void PrintInfo();
};
class Derived:public Base {
    void PrintInfo();
};
```
## Functor

A functor is basically a class that presents a *function-like interface* to the calling program. Functors have certain advantages over functions. Unlike functions, *functors can have state*. They fit into the object-oriented paradigm as compared to functions because functors are actually based on classes. Functors are often inlined by the compiler, unlike function pointers. *The functor does not require runtime dispatching, therefore it is more efficient in most cases*. The following functor provides two types of multiplication (Check **MultiplierFunctor** directory): `MultiplierFunctor.cpp`. 

## Lambda Functions
Lambda functions are anonymous functions which provide a *function-like interface* similar to functors. Lambda functions are not based on a class. *Lambda functions are used extensively with the Standard Template Library as inline functions*. The following example demonstrates a lambda function used with `remove_if()` to determine which elements of an array should be removed (Check **LambdaSelect** directory): `LambdaSelect.cpp`.

Lambda functions can also be *standalone within another function*. The following example uses a lambda function to calculate the average height of basketball and hockey players (Check **Average** directory): `Average.cpp`.

## Linked Lists

A simple linked list is shown in the code (Check **LinkedList** directory): `LinkedList.cpp`.
A queue and stack can be implemented from a linked list. A custom queue is shown in the code (Check **Queue** directory): `Queue.cpp`.
A custom stack is shown in the code (Check **Stack** directory): `Stack.cpp`.

## A Doubly Linked List for Student Information

We looked at source code for a *stack* and for a *queue* in C++. The following is partially implemented code for a doubly linked list based on a Student structure. The student list can get the next/previous node, push a student to the back of the list, get the student from the back of the list pop the student off the back of the list, and print the entire list. A destructor deletes any students remaining in the list on program exit. An iterator class has been added inside the student list class, to show how iterators can interact with the nodes of this class. The program can be seen at(Check **DoublyLinkedList** directory): `StudentList.h`, `StudentList.cpp` and `StudentListMain.cpp`.















