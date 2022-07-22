# Week11 Examples 

This week we will look at STL algorithms, exceptions and using pointers to multi-dimensional arrays.

## Reference Wrappers

`std::reference_wrapper` is a class template that wraps a reference in a copyable, assignable object. It is frequently used as a mechanism to store references inside standard containers (like `std::vector`) which cannot normally hold references. `std::reference_wrapper` is useful in combination with templates. It wraps an object by storing a pointer to it, allowing for reassignment and copy while mimicking its usual semantics. It also instructs certain library templates to store references instead of objects. Code that demonstrates a reference wrapper can be seen at(Check **ReferenceWrapper** and  **Wrapper** directories): `Wrapper.cpp` and `ReferenceWrapper.cpp`.

## Count_if and Copy_if

The `count_if` function returns the number of elements within a range that satisfies a given criteria. `copy_if` copies elements within a range that satisfies a given criteria. Both `count_if` and `copy_if` in the following sample code are examples of *lambda expressions* (Check **CountIf** and **CopyIf ** directories): `CountIf.cpp` and `CopyIf.cpp`.


## Sorting Student Information

The `std::sort()` function expects a standard data type. If a non-standard data type is used, the user has to provide a comparison function as a criteria for the sort. Code for a student list with its comparison function can be seen at (Check **Sorter** directory): `Student.h`, `Student.cpp` and `StudentMain.cpp`.

## Accumulating Student Information

The `std::accumulate()` function expects a standard data type. If a non-standard data type is used, the user has to provide an accumulate function as a criteria for the accumulation. Code for a student list with its accumulation function can be seen at (Check **StudentAccumulate** directory): `Student.h`, `Student.cpp` and `StudentMain.cpp`.

## Transforming Marks

The `std::transform()` is used for transforming data. The following program demonstrates the curving of marks using STL's `std::transform()` algorithm (Check **Transform** directory): `CurveMarks.cpp`.

## Exceptions

An exception is a form of software interrupt. They occur when something unusual happens, such as a *divide-by-zero*, *trying to access an array outside of the array bounds*, *trying to allocate memory when there is no longer any available RAM*, etc... What you may not know is that you can intercept this software interrupt in your code using exceptions. You can generate interrupts as well when you detect an unusual situation in your code. The following code generates exceptions for an array out of bounds error as well as a divide-by-zero error (Check **Exception** directory): `Exception.cpp`.

## Two-Dimensional Arrays
A tictactoe game has been created from a grid class. The grid class keeps track of the entries on a tictactoe grid. The grid class allows users to make a play, test to see if someone has won, and also to announce a tie game. This example also makes use of class enumerations (Check **TicTacToe** directory): `Grid.h`, `Grid.cpp` and `TicTacToeMain.cpp`. 