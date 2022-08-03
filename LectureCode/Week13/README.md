# Week13 Examples 
This week we will look at *Parallel Programming* in C++ using C++ threads. Parallel programming can also be performed by parallel processes. We will look at a simple application of threads within a network node.


## Thread Functions
Two more programs have been written to demonstrate the format functions may take when creating threads. The first program demonstrates threads with a function object and the second with a lambda function (Check **ThreadLambda** and **ThreadFunctionObject** directories): `ThreadFunctionObject.cpp` and `ThreadLambda.cpp`. 

## Thread Race Conditions

Sometimes a function has to *wait* for a thread to run before processing data. It does take a little time for a thread to start. Synchronization can be obtained with the **promise**, **packaged task** or **async**. 
- A promise can communicate a value to the future at a different time than at the end of a function call. 
- A packaged task takes a function as an argument and creates a packaged task object, which can be invoked later. The packaged task communicates a value to the future at the end of the task. 
- An async takes a function as an argument and returns a future at the end of the task. The async is executed immediately. See Difference between promise, packaged task and async for more details.

Programs that demonstrate these are (Check **ThreadFuture**, **ThreadPackagedTask**  and **ThreadAsync** directories): `ThreadFuture.cpp`, `ThreadPackagedTask.cpp` and `ThreadAsync.cpp`. 

## A Network Node

Threads are often used in servers or networking software. One thread receives incoming messages, another thread processes these messages and sends them on to their destination. One such example of a network node is given. Mutexes are emulated with mutex initialize, lock and unlock functions in order to protect a shared resource. The messages received in the receive thread are put in a queue. These messages are popped in the send thread and forwarded on to their destination. The input data is simulated via text files (Input1.dat...Input10.dat) and the destination for these messages are simulated by writing the data to an output file (Output.dat). All files are as follows (Check **NetworkNode** directory): `NetworkNode.h`, `NetworkNode.cpp` and `NetworkNodeMain.cpp`.
- The input data files can be found at: Input1.dat, Input2.dat, Input3.dat, Input4.dat, Input5.dat, Input6.dat, Input7.dat, Input8.dat, Input9.dat, Input10.dat.
- The output data file can be found at: Output.dat. 