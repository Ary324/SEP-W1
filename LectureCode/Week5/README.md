# Week5 Examples 

## Math Library

The advantage of using virtual functions with polymorphism is that all derived classes can be accessed through the base class. This means that all objects can be lumped together by the base class regardless of their derived types. The math library code contains a MathBase class with virtual functions for getting the area and the volume. The derived classes are Rectangle and Circle. Objects of type Rectangle and objects of type Circle can all be accessed through their base class MathBase. This makes writing loops much easier. The code is contained in one file as follows: `MathLib.cpp`.

## Series Circuit

- A simulator for an electronic circuit has been created, where the current through the circuit is set and the voltages across each component is calculated. The circuit consists of a *resistor*, *inductor*, and *capacitor* connected in series. This means the current through them is all the same, but the voltage across each component will be different. Each component will have its own way of calculating its voltage, but each component will keep a record each's current and voltage. We want all components to be accessible through the base class so this base class should have everything common to all components. This would include variables for voltage and current as well as functions for setting the current, getting the voltage and printing a report. The UML diagram for the series circuit is as follows: *SeriesCircuit.PNG*.
The code is as follows: `Component.h`, `Capacitor.h`, `Capacitor.cpp`, `Inductor.h`, `Inductor.cpp`, `Resistor.h`, `Resistor.cpp` and `SeriesCircuit.cpp`.
- An simulator for an electronic circuit has been created, where the user actually selects the components. This program prompts the user for 8 electronic components. The user determines the type of each component (resistor, capacitor, inductor) and these components are connected in series. As before, the current through the circuit is set and the voltages across each component is calculated. An abstract class is created which acts as an interface to the program, with pure virtual functions for setting the current and printing a report. A CreateComponent function is used to create the circuit components.
The UML diagram is as follows: *iSeriesCircuit.PNG*.
The code is as follows: `iComponent.h`, `Component.h`, `Component.cpp`, `Capacitor.h`, `Capacitor.cpp`, `Inductor.h`, `Inductor.cpp`, `Resistor.h`, `Resistor.cpp` and `SeriesCircuit.cpp`.

## Stooge Factory

The Stooge factory is an example of the factory design pattern, which can create a set of related objects through a static make_stooge() function. The program is based on the popular comedy "The Three Stooges". The factory can create three stooges: Larry, Curly and Moe. They are tied together through a common base class. `StoogeMain.cpp` allows you to create whichever stooge you wish, up to three of them, via dynamic binding: `Stooge.h`, `Stooge.cpp`, `Curly.h`, `Larry.h`, `Moe.h` and `StoogeMain.cpp`.


**Note that a virtual destructor is declared in the abstract base class in order to invoke the destructors in the derived classes.**

