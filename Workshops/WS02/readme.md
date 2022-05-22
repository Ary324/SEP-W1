# Workshop 2: Real Estate
## Due Date: Friday, June 2, 2022 before 23:59
## Workshop Objectives  
This workshop will test your ability to perform deep and shallow copies, overload operators, friendship, and use the copy constructor and assignment as well as the move constructor and assignment.

## Submission Policy
The workshop should contain ***only work done by you this term*** or provided by your professor.  Work done in another term (by you or somebody else), or work done by somebody else and not **clearly identified/cited** is considered plagiarism, in violation of the Academic Integrity Policy.

Every file that you submit must contain (as a comment) at the top **your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

- Add comments throughout the code where necessary.

- If the file contains only your work, or work provided to you by your professor, add the following message as a comment at the top of the file:

    > I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

- If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which parts of the assignment are given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrong doing.

## Introduction and Workshop Tasks
This program creates objects of type **House**. Each house has an *owner*, *address*, *rooms*, *bathrooms*, and a *price*. The class functions that operate on this data are as follows:

	- House();//Default constructor
    - House(const char* _owner, const char* _address, const double _rooms, const double _bathrooms, const double _price);//Data for the house object
    - House(const House& house);//Copy constructor
    - House& operator=(const House& house);//Copy assignment
    - House(House&& house) noexcept;//Move constructor
    - House& operator=(House&& house) noexcept;//Move assignment
    - bool ChangeOwner(char* newOwner);//Change the owner. Test to see if the character array newOwner actually exists. If it doesn't, return false, otherwise return true.
    - bool ChangePrice(double newPrice);//Change the price. Test to see if the price is a positive number. If it isn't, return false, otherwise return true.
    - const House& operator+=(double amount);//increase/decrease the price of the house
    - void DisplayInfo() const;//Display the owner, address, rooms, bathrooms, and price. All double's should be printed to two decimal places.
    - ~House();//Destructor

There are also two functions that operate on this data from outside the class. They are as follows:

    bool operator==(const House& house1, const House& house2);//Do the two houses have the same owner?
    void operator>>(House& house1, House& house2);//Move contents from the house1 object to the house2 object

Note that `operator==` might require access to private members of the **House** object, so you may have to modify `House.h`.
Also, you might decide that `operator==` and `operator>>` can be implemented within the class. You are free to move them to within the class if you wish.

You have been given a header file for House and a main file for testing: `House.h` and `HouseMain.cpp`. 
**You neeed to Complete `House.cpp`.**

- To assist you with this lab, you might want to look at the following sample code taken from our **SEP101 final exam**. A Warehouse class is implemented using operator overloading and copy/move constructor and assignment operators: `Warehouse.h`, `Warehouse.cpp` and `WarehouseMain.cpp`. 

### Sample Output
A sample run is as follows:
```
	Owner:     Lionel Messi
    Address:   34 Cedarwood Road
    Rooms:     5.00
    Bathrooms: 2.50
    Price:    $2500000.00
    
    Owner:     Neymar da Silva Santos Junior
    Address:   12 Broadway Street
    Rooms:     7.00
    Bathrooms: 4.00
    Price:    $5600000.00
    
    Owner:     Lionel Messi
    Address:   34 Cedarwood Road
    Rooms:     5.00
    Bathrooms: 2.50
    Price:    $2500000.00
    
    Owner:     Neymar da Silva Santos Junior
    Address:   12 Broadway Street
    Rooms:     7.00
    Bathrooms: 4.00
    Price:    $5600000.00
    
    ----------------------------
    
    Owner:     none
    Address:   none
    Rooms:     0.00
    Bathrooms: 0.00
    Price:    $0.00
    
    Owner:     none
    Address:   none
    Rooms:     0.00
    Bathrooms: 0.00
    Price:    $0.00
    
    Owner:     Lionel Messi
    Address:   34 Cedarwood Road
    Rooms:     5.00
    Bathrooms: 2.50
    Price:    $2500000.00
    
    Owner:     Neymar da Silva Santos Junior
    Address:   12 Broadway Street
    Rooms:     7.00
    Bathrooms: 4.00
    Price:    $5600000.00
    
    Owner:     Lionel Messi
    Address:   34 Cedarwood Road
    Rooms:     5.00
    Bathrooms: 2.50
    Price:    $2500000.00
    
    Owner:     Neymar da Silva Santos Junior
    Address:   12 Broadway Street
    Rooms:     7.00
    Bathrooms: 4.00
    Price:    $5600000.00
    
    ----------------------------
    
    Houses 3 and 5 are the same
    Houses 4 and 6 are the same
    
    ----------------------------
    
    Owner:     Lionel Messi
    Address:   34 Cedarwood Road
    Rooms:     5.00
    Bathrooms: 2.50
    Price:    $3500000.00
    
    Owner:     Neymar da Silva Santos Junior
    Address:   12 Broadway Street
    Rooms:     7.00
    Bathrooms: 4.00
    Price:    $6600000.00
    
    Owner:     Lionel Messi
    Address:   34 Cedarwood Road
    Rooms:     5.00
    Bathrooms: 2.50
    Price:    $2500000.00
    
    Owner:     Neymar da Silva Santos Junior
    Address:   12 Broadway Street
    Rooms:     7.00
    Bathrooms: 4.00
    Price:    $5600000.00
    
    ----------------------------
    
    Owner:     none
    Address:   none
    Rooms:     0.00
    Bathrooms: 0.00
    Price:    $0.00
    
    Owner:     none
    Address:   none
    Rooms:     0.00
    Bathrooms: 0.00
    Price:    $0.00
    
    Owner:     Lionel Messi
    Address:   34 Cedarwood Road
    Rooms:     5.00
    Bathrooms: 2.50
    Price:    $3500000.00
    
    Owner:     Neymar da Silva Santos Junior
    Address:   12 Broadway Street
    Rooms:     7.00
    Bathrooms: 4.00
    Price:    $6600000.00
```
## Reflection
Study your workshop solution, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.
Create a **text** file named `reflect.txt` that contains the answers to the following questions 

1. Do you feel operator overloading in general might introduce risk to a program? How?
2. Does the overloading of the `>>` operator add clarity to the program? If so, why? If not, why?
3. Give three operators which cannot be overloaded. Explain why for each.



## Submission

Test and demonstrate the execution of your program using the data given to you and make sure your code is generating output similar to the above example.



- Please email **two** files: `House.cpp`, and `House.h` in addition to the `reflect.txt` to email address: <mufleh.al-shatnawi@senecacollege.ca>

- Email Subject Line should be **`SEP200-NAA-WS02`**

####  Late submissions will incur a 25% penalty each day.

**:warning:Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Resubmissions will attract a penalty.

