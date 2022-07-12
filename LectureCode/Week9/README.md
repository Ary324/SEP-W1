# Week9 Examples 

This week we will look at sample code from container adapters (stack, queue), sequence containers (deque, vector) as well as associative containers (map).

## Stack
An example of a container adapter is the *stack*. A practical application of a stack is when a function is called. All parameters are put on the stack, and popped off once the function has been exited. The following code shows a simple implementation of a stack (Check **Stack** directory): `Stack.cpp`.


## Queues
A queue is another example of a container adapter. A practical application of a queue is in threaded applications (parallel programming). One thread receives and pushes data on to the queue while another thread pops the data off the queue for processing. This allows the receive and process functions to be split into two parts. The following are two simple examples of a queue (Check **Queue** and **Queue2** directories): `Queue.cpp` and `Queue2.cpp`.

## Deque
A deque is an example of a *sequence container*. It acts as a queue but allows operations on both sides of the queue. Since the deque is a sequence container, one can use an *iterator on it*. A simple example of a deque with an iterator is shown in the following (Check **Deque** directory): `Deque.cpp`.

## Employee Info
Another example of a sequence container is the *vector*. A vector is very useful in a situation where you have an array of elements, but you do not know the size of the array at runtime, or the array grows or shrinks as the program is run. A vector is a useful alternative to *dynamic memory allocation*. Since it is a sequence container one can use an iterator with it. An example with a vector is the following code that stores and uses a vector of employee information (Check **EmployeeInfoSTL** directory):`EmployeeInfoSTL.h`, `EmployeeInfoSTL.cpp` and `EmployeeInfoSTLMain.cpp`.


## Map of Words
An example of an associative container is a *map*. A practical application of a map is a database. A map is based on *key-value pairs* and these pairs are sorted internally into a binary tree. This allows for quick searching and sorting. For standard types, the sorting is done internally. For non-standard type, the programmer has to provide the sorting methodology. The following three examples show some of the features of map through a map of words. As you can see from the example it is possible to iterate through this map of words (Check **MapOfWords** directory):
`MapOfWords.cpp`, `MapOfWords2.cpp` and `MapOfWords3.cpp`.

## Big Map

An example that demonstrate the fast searching ability of a database based on STL's `map()` can be seen in the following code. Here a database of *4 million elements* is built. The search is very quick because STL's map is based on the binary tree:(Check **BigMap** directory):
`BigMap.cpp`
 

## Toolbox Revisited

In week8 we looked at sample code that demonstrated aggregation of different types which are related through a base class. We used an array of pointers to the base class. This week we are going to do the same, but in one example we will use a [vector](http://cplusplus.com/reference/vector/vector/) of pointers to the base class, and in another example we are going to use a [list](http://cplusplus.com/reference/list/list/) of pointers to the base class. In all three examples the types are **Hammer** and **Screwdriver**. They are both tools derived from a ToolIf interface class.

- In example one, we use a vector of pointers to **ToolIf** (Check **ToolboxVector** directory): `ToolIf.h`, `ToolIf.cpp`, `Hammer.h`, `Screwdriver.h`, `Toolbox.h` and `ToolMain.cpp`. A sample run is shown in `SampleRun.txt`. Notice that when using a vector, the only difference between this code and that of week8, is that we `push_back` onto the vector. Other than that, the vector in this example can be treated the same as an array.
- In example two, we use a list of pointers to **ToolIf**(Check **ToolboxList** directory): `ToolIf.h`, `ToolIf.cpp`, `Hammer.h`, `Screwdriver.h`, `Toolbox.h` and `ToolMain.cpp`. A sample run is shown in `SampleRun.txt`. Notice that when using a list, *we could push to or pop from the front of the list or push to or pop from the back of the list*, because `std::list` in C++ uses a **doubly linked list**. **forward_list** uses *a singly linked list and only allows pushing to and popping from the front of the list*.
- This example includes the ability to remove an item from the list. With lists it is easy to insert or remove items from any position in the list. The `RemoveTool()` function found in the sample code removes a tool using the tool's name as the key. It iterates through the list until the names match. The iterator is then used to remove the item from the list. 
