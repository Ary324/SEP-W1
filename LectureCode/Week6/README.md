# Week6 Examples 

## Math Test

The program MathTest shows how to perform a square on a number and a square on a fraction. It does not matter what type the numbers are. They could be int, float, double, etc... The code demonstrates the use of function templates:
`Math.h` and `MathTest.cpp`.

## A Database

A generic database has been created to perform functions on many data schematics. The database can find a data element by name, get the number of data elements, get a data element by index, get the last data element, and get the first data element. The data element can be any kind of structure but must have a variable name which acts as the key into the database.
An example is created with two types of data schematics (Database2, Database2).
The code for the database can be found in `Database.h` and the test code for the data base can be found at `DatabaseMain.cpp`.

## Math Test with Polymorphism

A second MathTest program has been created to show how to implement inheritance with templates. This math library performs calculation on a series of numbers. The calculations are to add the series, or to multiply the series. The numbers could be of any numerical type. The base class exposes one virtual function: Calculate(). There is a MathAdd derived class for adding a series of numbers and there is a MathMultiply function for multiplying a series of numbers. Templated are the type of numbers to be operated on, as well as the length of the series itself.
The code is as follows: `MathTest2.h` and `MathTest2.cpp`.

## Math Test with Parametric Polymorphism

A third MathTest program has been created to show how to implement parametric polymorphism with templates. This math library also performs calculation on a series of numbers. As with MathTest2, the calculations are to add the series (a MathAdd object), or to multiply the series (a MathMultiply object). The numbers to be added or multiplied could be of any numerical type. The common header file exposes the function Calculate() which takes as its first argument a math library object which could be of any type (in this case either MathAdd or MathMultiply), an array of numbers as its second argument, and the array length as its third argument. Calculate determines which math object to access based on the type of its first argument. This requires both the MathAdd and MathMultiply objects to expose the same function, in this case Calculate().
The code is as follows: `MathCommon.h`, `MathAdd.h`, `MathMultiply.h`, and `MathTest3.cpp`.

## Default Template Parameters

Templates can have default types. Code that demonstrates this can be seen at: `Array.h` and `Array.cpp`.

## Specialized Template Parameters

Templates can specialization based on the types of their parameters. Code that demonstrates this can be seen at: `Maximum.h` and `Maximum.cpp`.
The above code has a general way of calculating the maximum of two values, and a specialized way if the values are character arrays.

## The Adapter Pattern - Student Grades

- Sometimes we are not sure what types we will use until run-time. Based on user-input, our program might run in one of several modes. We use an [Adapter Pattern](https://refactoring.guru/design-patterns/adapter) to run our program in the desired mode based on user input. The adapter pattern allows objects with incompatible interfaces to collaborate, and is often used to adapt legacy code to cutting edge code, but we can also use it here. The following example uses an adapter pattern to run a simple student grades program in one of two modes - number mode, or letter mode. If marks are entered as percentages, the program runs a certain way. If marks are entered as letters, the program runs another way.

- The software starts from a **StudentGradeAdapter** base class. This will be the static type used in our main function. The dynamic type will either be **LetterStudent** or **NumberStudent**, depending on user input. The function **studentGrade()** will prompt the user for the student's name and the mode of operation (letter marks/number marks). **studentGrade()** will then create the dynamic type for the main function (**LetterStudent** or **NumberStudent**) and the main function will call the **run()** function for this dynamic type.

- The **NumberStudent** and **LetterStudent** classes are derived from the base class StudentBase. All files for this example can be found at: `StudentGradeAdapter.h`, `StudentGrade.h`, `StudentBase.h`, `LetterStudent.h`, `NumberStudent.h` and `StudentGradeMain.cpp`. 