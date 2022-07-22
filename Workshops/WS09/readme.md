# Workshop 9:  Car Ratings
## Due Date: Friday, August 05, 2022 before 23:59
## Workshop Objectives  
This workshop will test your ability to use STL algorithms.


## Submission Policy
The workshop should contain ***only work done by you this term*** or provided by your professor.  Work done in another term (by you or somebody else), or work done by somebody else and not **clearly identified/cited** is considered plagiarism, in violation of the Academic Integrity Policy.

Every file that you submit must contain (as a comment) at the top **your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

- Add comments throughout the code where necessary.

- If the file contains only your work, or work provided to you by your professor, add the following message as a comment at the top of the file:

    > I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

- If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which parts of the assignment are given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrong doing.

## Introduction and Workshop Tasks
The Standard Template Library provides a rich set of algorithms that you can perform on your data. For non-standard data types (user defined types) you can provide your own criteria for handling data in the form of a **lambda function**.

In this workshop you will use STL algorithms as you process data from a selection of cars. The information for each car is stored in a structure that contains the **car's name, country, reliability, fuel efficiency, and horse power**. You might find the following links useful:

- [STL Algorithms](http://www.cplusplus.com/reference/algorithm/)
- [STL Numerics](https://www.cplusplus.com/reference/numeric/)
- [STL Containers](http://www.cplusplus.com/reference/stl/)
- [STL Sort Algorithm](http://www.cplusplus.com/reference/algorithm/sort/)
- [STL For-Each Algorithm](http://www.cplusplus.com/reference/algorithm/for_each/)
- [STL Accumulate Numerics](https://www.cplusplus.com/reference/numeric/accumulate/)
- [STL Transform Algorithm](https://http//www.cplusplus.com/reference/algorithm/transform/)


The test program `CarRating.cpp` provides you with a vector of cars with various ratings. The function `processCars()` asks that you complete the following tasks:

- **Task1:** Sort and print out all cars in order of their reliability rating (higher is better).
- **Task2:** Sort and print out all cars in order of their fuel efficiency (lower is better).
- **Task3:** Sort and print out all cars in order of their horse power (higher is better).
- **Task4:** Print out the average horse power of all *German* cars.
- **Task5:** Print out all cars with reliability greater than (or equal to) `8.0`.
- **Task6:** Change the country of all American cars from **"USA"** to **"United States"**.
- **Task7:** Reorganize the vector of all cars in order of their rating (higher is better) based on the formula:

`rating = 2.0*(reliability-4.1) + 2.0*(12.1-fuelEfficiency) + (horsePower-130.0)/37.0`

Complete `processCars()` according to the above instructions. 

**Be sure to add comments throughout the code where necessary.**

### Sample Output
A sample run looks as follows. Be sure to format your output based on this sample run: 
```
    LIST OF CARS:
    Toyota Corolla, Japan.
    Honda Civic, Japan.
    Dodge Charger, USA.
    BMW 330x, Germany.
    Chevrolet Impala, USA.
    BMW 240, Germany.
    Ford Fusion, USA.
    Subaru Impreza, Japan.
    BMW M5, Germany.
    Toyota Camry Hybrid, Japan.
    Audi A4, Germany.
    Dodge P.O.S., USA.
    
    SORTED BY RELIABILITY:
    Toyota Camry Hybrid, Japan, reliability: 9.3
    Toyota Corolla, Japan, reliability: 9.1
    Audi A4, Germany, reliability: 8.9
    Honda Civic, Japan, reliability: 8.8
    Chevrolet Impala, USA, reliability: 8.1
    Subaru Impreza, Japan, reliability: 7.9
    BMW 240, Germany, reliability: 7.4
    BMW 330x, Germany, reliability: 7.2
    BMW M5, Germany, reliability: 6.9
    Ford Fusion, USA, reliability: 6.8
    Dodge Charger, USA, reliability: 6.5
    Dodge P.O.S., USA, reliability: 4.1
    
    SORTED BY FUEL EFFICIENCY:
    Toyota Camry Hybrid, Japan, fuel efficiency: 7
    Honda Civic, Japan, fuel efficiency: 7.8
    Toyota Corolla, Japan, fuel efficiency: 8
    Subaru Impreza, Japan, fuel efficiency: 8.5
    Audi A4, Germany, fuel efficiency: 8.8
    BMW 330x, Germany, fuel efficiency: 8.9
    BMW 240, Germany, fuel efficiency: 9.2
    Ford Fusion, USA, fuel efficiency: 9.7
    Chevrolet Impala, USA, fuel efficiency: 9.9
    Dodge Charger, USA, fuel efficiency: 10.8
    Dodge P.O.S., USA, fuel efficiency: 11.7
    BMW M5, Germany, fuel efficiency: 12.1
    
    SORTED BY HORSE POWER:
    BMW M5, Germany, horse power: 500
    BMW 240, Germany, horse power: 320
    Dodge Charger, USA, horse power: 300
    Chevrolet Impala, USA, horse power: 280
    BMW 330x, Germany, horse power: 260
    Audi A4, Germany, horse power: 255
    Dodge P.O.S., USA, horse power: 233
    Ford Fusion, USA, horse power: 210
    Toyota Camry Hybrid, Japan, horse power: 205
    Subaru Impreza, Japan, horse power: 150
    Honda Civic, Japan, horse power: 138
    Toyota Corolla, Japan, horse power: 130
    
    The average horse power of all German cars is 333.75
    
    HIGH RELIABILITY CARS:
    Chevrolet Impala, USA, reliability: 8.1
    Audi A4, Germany, reliability: 8.9
    Toyota Camry Hybrid, Japan, reliability: 9.3
    Honda Civic, Japan, reliability: 8.8
    Toyota Corolla, Japan, reliability: 9.1
    
    
    LIST OF CARS ORDERED BY RATING:
    Toyota Camry Hybrid, Japan.
    Audi A4, Germany.
    Honda Civic, Japan.
    Toyota Corolla, Japan.
    BMW 240, Germany.
    Chevrolet Impala, United States.
    BMW 330x, Germany.
    BMW M5, Germany.
    Subaru Impreza, Japan.
    Ford Fusion, United States.
    Dodge Charger, United States.
    Dodge P.O.S., United States.
```

## Reflection
Study your workshop solution, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.
Create a **text** file named `reflect.txt` that contains the answers to the following questions 


1. Do you find **lambda** functions useful? Why or why not?
2. Where are **lambda** functions best utilized?
3. What are the three components of the *Standard Template Library*?



## Submission

Test and demonstrate the execution of your program using the data given to you and make sure your code is generating output similar to the above example.



- Please email the files: `CarRating.cpp`  in addition to the `reflect.txt` to email address: <mufleh.al-shatnawi@senecacollege.ca>

- Email Subject Line should be **`SEP200-NAA-WS09`**

####  Late submissions will incur a 25% penalty each day.

**:warning:Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Resubmissions will attract a penalty.

