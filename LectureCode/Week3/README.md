# Week3 Examples 
## LValues and RValues
- Modern C++ (C++0x and greater) has introduced rvalue references: a new type that can bind to temporary objects, giving you the ability to modify them. The following code is a great exercise on lvalues and rvalues. It demonstrates that lvalues are variables with some kind of storage, and rvalues are temporary values. The concepts gained here are used in the move constructor and move assignment operator: `LValueRValue.cpp`.

## Copy/Move Constructor/Assignment

- The following program demonstrates the copy constructor, copy assignment move constructor and move assignment via a circuit simulator which simulates a series electrical circuit with an inductor, resistor and capacitor. Each electrical component is characterized in a class. For instance, the class Inductor records the component's inductance and can calculate the voltage across the inductor for a given current. The code is: `Inductor.h`, `Inductor.cpp`, `Resistor.h`, `Resistor.cpp`, `Capacitor.h`, `Capacitor.cpp`, and `SeriesCircuit.cpp`.

## Operator Overloading, continued

- The following program shows the overloading of the `>>` and `<<` operators by a card game played by some of the characters in the TV show "The Sopranos". The code can be found at:  `Player.h`, `Player.cpp`, and `CardGame.cpp`.

## A Singleton Database
- The following code makes use of the Singleton design pattern to ensure there is only one instance of the database class. The code demonstrates static class variables, static class functions, class enumerations, and embedded debug logging: `Data.txt`, `Database.h`, `Database.cpp` and `DatabaseMain.cpp`.

