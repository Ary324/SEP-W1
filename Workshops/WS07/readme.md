# Workshop 7: A Cellphone Customer Database
## Due Date: Friday, July 22, 2022 before 23:59
## Workshop Objectives  
This workshop will test your ability to use class variables, enumerations and standard maps.


## Submission Policy
The workshop should contain ***only work done by you this term*** or provided by your professor.  Work done in another term (by you or somebody else), or work done by somebody else and not **clearly identified/cited** is considered plagiarism, in violation of the Academic Integrity Policy.

Every file that you submit must contain (as a comment) at the top **your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

- Add comments throughout the code where necessary.

- If the file contains only your work, or work provided to you by your professor, add the following message as a comment at the top of the file:

    > I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

- If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which parts of the assignment are given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrong doing.

## Introduction and Workshop Tasks
You will create at least the following classes in addition to other classes that are given to you:
- `Customer`

A cellphone company wants to keep track of its customers. It records the **customer's name, address, customer number and cell phone number** in a *standard map* with the **cell phone number as the key**. There are `160,000` entries in this database.

The test program `CustomerBase.cpp` builds this database for you. You have to create a `Customer` class that can be constructed by the **customer's name, address, customer number and cell phone number**. This class should have get functions for all of these as well as a get function for full customer information. This class should have **set functions** for the customer's name, address and phone number. The class should have a function to **zero all of the data**, because we do not want this information lingering around in the binary after the program has completed.

More details are as follows:



### The Customer Class
A general outline of the customer class has been given to you in `Customer.h` and `Customer.cpp`. As we create customers, we have to **keep track of the number of customers we create**.

- `Customer()`. The default customer constructor will take the number of customers as the client number. It will zero or blank out all the other variables.
- `Customer()`. The second customer constructor will set the name, address, and phone number of the customer. It will use the number of customers as the client number.
- `Get Functions`. You need get functions for name, address, customer number and phone number.
- `GetCustomerInfo()`. You need a get customer information function that returns a string consisting of the customer's name, address, client number and phone number. Be sure to format this information in some way.
- `Set Functions`. You need set functions for name, address and phone number. These functions return an *error status*. For string entries, return invalid data if the string entered is empty and return resource not available if you are not able to assign the string to your local variable (use the test `variable.size()<=0`). For the phone number, return invalid data if the number is **less than `0` or greater than `9999999999`**.
- `ZeroData()`. Zero the data by setting the name and address to an empty string and setting the customer number and phone number to `0`.





### The Customer Base Test Function

The `main()` function of `CustomerBase.cpp` builds a database of `160,000` and performs certain tests on the database. Please follow and **complete the instructions embedded in the code**.



**Be sure to add comments throughout the code where necessary.**

### Sample Output
A sample run is as follows:
```
    Name:           Bdqm Cern
    Address:        56 Dfso Drive
    Customer Number:1112
    Phone Number:   1111112222
    
    Name:           Darryl Smith
    Address:        1 Bloor Street
    Customer Number:1112
    Phone Number:   9051112222
    
    Cannot find the customer
    
    Name:
    Address:
    Customer Number:0
    Phone Number:   0
```

## Reflection
Study your workshop solution, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.
Create a **text** file named `reflect.txt` that contains the answers to the following questions 

1. How does the `std::map` build a database? In a linear format or in a tree format?
2. How is this format advantageous?
3. Explain how you could instruct `std::map` to sort data for non-standard data types.


## Submission

Test and demonstrate the execution of your program using the data given to you and make sure your code is generating output similar to the above example.



- Please email the files: `Customer.h`, `Customer.cpp` , `CustomerBase.cpp` in addition to the `reflect.txt` to email address: <mufleh.al-shatnawi@senecacollege.ca>

- Email Subject Line should be **`SEP200-NAA-WS07`**

####  Late submissions will incur a 25% penalty each day.

**:warning:Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Resubmissions will attract a penalty.

