# Week12 Examples 

This week we will look at three unrelated topics. The **smart pointer** ensures that programs are free of memory and resource leaks. **Multiple inheritance** is a feature of C++ that allows a class to inherit from more than one base class. **Bitwise expressions** allow operations in C++ to be performed at the bit level.


## Smart Pointers
A custom smart pointer has been built to demonstrate the internal workings of a smart pointer. The code for a custom smart pointer can be found at(Check **SmartPtr** directory): `Title.h`, `SmartPtr.h` and SmartPtr.cpp.
Code that makes use of C++'s smart pointer *unique_ptr* to prevent memory leaks can be seen at (Check **SmartPtr2** directory): `Title.h` and `UniquePtr.cpp`.
Code that demonstrates the use of C++'s smart pointer *shared_ptr* can be found at (Check **SharedPtr** directory): `Title.h` and `SharedPtr.cpp`. 


## The Stooge Factory

Back in *week5* we looked at the Stooge factory as a demonstration of the factory design pattern. This time we will implement the Stooge factory using the *unique_ptr*. The Stooge factory creates a set of related objects through a static `make_stooge()` function. The program is based on the popular comedy "The Three Stooges". The factory can create three stooges: Larry, Curly and Moe. They are tied together through a common base class. `StoogeMain.cpp` allows you to create whichever stooge you wish, up to three of them (Check **StoogeFactory** directory): `Stooge.h`, `Stooge.cpp`, `Curly.h`, `Larry.h`, `Moe.h` and `StoogeMain.cpp`. 

## A Database

Back in *week3* we looked at a Database which was created and used via the Singleton design pattern. This time we will implement the Singleton with a *shared_ptr*. The Singleton design pattern to ensure there is only one instance of the database class (Check **SingletonDataBase** directory): `Data.txt`, `Database.h`, `Database.cpp` and `DatabaseMain.cpp`. 

## Multiple Inheritance

When a class inherits from two or more base classes, ambiguities can result. One way of resolving ambiguities is in the class itself, where it specifies which base class should perform which function. Another way is by making a common base class virtual. Code that demonstrates the resolution of ambiguities can be seen at (Check **VirtualInheritance** directory): `Name.h`, `Name.cpp`, `NamedCube.h`, `NamedCube.cpp`, `ColouredName.h`, `ColouredName.cpp`, `NamedColouredCube.h`, `NamedColouredCube.cpp` and `VirtualInheritance.cpp`. 

## Bitwise Expressions

Flags are often used to qualify a certain operations. Files, for instance, have flags to indicate whether the file is read-only, write-only, read-write, to indicate permissions etc... It is a waste of space to store each piece of information inside of a standard data type such as int. Rather, since these flags represent binary states, they could be stored inside specific bits of one flag. For instance, the following document shows how to set and unset flags for a file: `SetUnsetBit.docx`.
The following code follows the document in the setting and unsetting of bits for a files operation class (Check **SetUnsetBit** directory): `Sample.txt` and `FileOperations.h` and `SetUnsetBit.cpp`. 


