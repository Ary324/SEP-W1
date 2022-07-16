# Workshop 8:  Reorder an Array
## Due Date: Friday, July 29, 2022 before 23:59
## Workshop Objectives  
This workshop will test your ability to use a custom **stack** class and a custom **queue** class. It will also test your ability to use a standard algorithm from STL.


## Submission Policy
The workshop should contain ***only work done by you this term*** or provided by your professor.  Work done in another term (by you or somebody else), or work done by somebody else and not **clearly identified/cited** is considered plagiarism, in violation of the Academic Integrity Policy.

Every file that you submit must contain (as a comment) at the top **your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

- Add comments throughout the code where necessary.

- If the file contains only your work, or work provided to you by your professor, add the following message as a comment at the top of the file:

    > I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

- If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which parts of the assignment are given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrong doing.

## Introduction and Workshop Tasks
Please take a look at the custom **stack** and **queue** classes found in `Stack.h` and complete the tasks under TODO in `Reorder.cpp`.

More details are as follows:

### ReOrder

- `ReOrder()` function takes three arguments as shown in `Reorder.cpp`. Complete this function using **stack** and **queue**. The number `0` is used as a delimiter between sets of numbers. The new array should have all negative numbers on one side and all positive numbers on the other side. **The zero should be pushed to the end of the array**. See the sample run below.


### Custom Compare Function

The custom compare function is used in conjunction with the standard *sort* function. The numbers to be sorted are of a standard data type but create this custom compare function anyway. The function should result in a **sorted array from the greatest number to the least number**.



**Be sure to add comments throughout the code where necessary.**

### Sample Output
A sample run is as follows:
```
    array:    -3 2 -1 5 1 -4 0 11 12 13 -11 -12 0 -1 -2 6 8 7
    newArray: -3 -1 -4 1 5 2 -11 -12 13 12 11 -1 -2 7 8 6 0 0
    newArray sorted: 13 12 11 8 7 6 5 2 1 0 0 -1 -1 -2 -3 -4 -11 -12
```

## Reflection
Study your workshop solution, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.
Create a **text** file named `reflect.txt` that contains the answers to the following questions 

1. Do you see any application for *lambda* functions in C++?
2. Is `int` a class or an object? Is `a` in `int a;` a class or an object?
3. If you were to create a type or class called *complex_number* which has all the operations of an `int`, what operators would you have to overload to create a *complex_number* class?



## Submission

Test and demonstrate the execution of your program using the data given to you and make sure your code is generating output similar to the above example.



- Please email the files: `Stack.h`, `Reorder.cpp` in addition to the `reflect.txt` to email address: <mufleh.al-shatnawi@senecacollege.ca>

- Email Subject Line should be **`SEP200-NAA-WS08`**

####  Late submissions will incur a 25% penalty each day.

**:warning:Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Resubmissions will attract a penalty.

