# Week4 Examples 


## Calculate Area

The program calculates the areas of three shapes: a *square*, *circle*, and *rectangle*. These are all shapes and have several things in common. For instance, they have dimensions, constructors as well as a function for calculating the area. All these common items could be declared in a base class, and specialized in a derived class. For instance, a rectangle has a length and a width, a square just a length, and the circle a radius. The base class could assume a default shape of a rectangle and implement a calculate area for the rectangle. The other derived classes will have to implement their own calculate areas. The UML diagram and code are as follows:
*CalculateArea.PNG* and `CalculateArea.cpp`.


## Travel Simulator

This program simulates the gas consumption of a *car* and a *train*. Both car and train have a make, model, colour, and year of production. They also have accessors functions for each of these as well as a function to display a report. Since these variables and functions are in common, they can be contained in a base class. The car and train have different ways of setting fuel efficiency and calculating fuel consumption. These are collected in derived classes for Car and Train.
The UML diagram can be seen at *Automobile.PNG*. The code can be seen at:
`Vehicle.h`, `Vehicle.cpp`, `Car.h`, `Car.cpp`, `Train.h`, `Train.cpp` and `TravelSimulator.cpp`.

## Sports Organization

This program represents a sports organization, where common elements are contained within a `SportsOrganization` base class, and specialized elements are contained within `HockeyTeam` and `BaseballTeam` derived classes. The example shows copy construction/assignment and move construction/assignment with resources in both the base class and derived classes:
`SportsOrganization.h`, `SportsOrganization.cpp`, `HockeyTeam.h`, `HockeyTeam.cpp`, `BaseballTeam.h`, `BaseballTeam.cpp` and `SportsMain.cpp`.


