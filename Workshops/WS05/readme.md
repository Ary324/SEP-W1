# Workshop 5: A Company Database
## Due Date: Friday, June 24, 2022 before 23:59
## Workshop Objectives  
This workshop will test your ability to use templates as a means of parametric polymorphism.
In this workshop, you are going to use templates with parametric polymorphism to build two **company databases** - one for regular employees and one for executives. The function prototypes for accessing these databases are identical. *What these functions do and the type of data they take are different.*


## Submission Policy
The workshop should contain ***only work done by you this term*** or provided by your professor.  Work done in another term (by you or somebody else), or work done by somebody else and not **clearly identified/cited** is considered plagiarism, in violation of the Academic Integrity Policy.

Every file that you submit must contain (as a comment) at the top **your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

- Add comments throughout the code where necessary.

- If the file contains only your work, or work provided to you by your professor, add the following message as a comment at the top of the file:

    > I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

- If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which parts of the assignment are given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrong doing.

## Introduction and Workshop Tasks

You will create three classes as follows:
- `CompanyEmployee`
- `CompanyExecutive`


### Company Common
The common header file for this program will expose the structures for the databases and the functions which are common to both databases. These functions are as follows.

- `AddPersonnel()`. This function will take as arguments a database object and the number of persons to be added to the database. It returns **true** if these persons have been successfully added, **false** otherwise.
- `FindPersonnel()`. This function will take as arguments a database object, **the name of the person to be found**, and a **reference to the person found**. That person could be a *regular employee* or an *executive*. The function returns **true** if the person is found, **false** otherwise.
- `CalculateSalary()`. This function takes as arguments a database object the **name of a person** and returns the **person's salary**. *If the person is not found, 0.00 is returned.*

The header file for company base is partially complete. See `CompanyCommon.h`.
In the header file you can see the structure for a standard employee and the structure for an executive.
Kindly note that in those functions where you are changing values in the database, **you might have to pass the database as a reference instead of by value**.



### Company Employee

The database for the company employees will contain up to **MAX_SIZE** items of data.

- The company employee list is based on the `StandardEmployee` structure. *You will have to keep track of the number of employees.*
- The company employee constructor should initialize any pointers to `nullptr` and any variables to `0` or `""`.
- `AddPersonnel()`. This function will take as an argument the number of persons to be added to the database. It returns **true** if these persons have been successfully added, **false** otherwise. It should test to see if the maximum size has not been encroached. Any new employees have to be added to the list of employees. This means creating a new list copied from the old list with space for the new employees at the end. **Be sure to delete the old list**. Each employee should be asked the following:
	- Enter the employee's name:
	- Enter the employee's position:
	- Enter the employee's base salary:
	- Enter the employee's annual profit sharing amount:
	- Enter the employee's annual performance bonus:
- `FindPersonnel()`. This function will take as arguments the name of the person to be found, and a reference to the person found. That person is of type `StandardEmployee`. The function returns **true** if the person is found, **false** otherwise.
- `CalculateSalary()`. This function takes as an argument the name of a person and returns the **person's salary**. *If the person is not found*, `0.00` is returned. **If the person is found, then salary is the base salary `plus` the annual profit sharing amount `plus` the annual performance bonus.**

**Be sure to clean up on destruction.**

### Company Executive

The database for the company executives will contain up to **MAX_SIZE** items of data.

- The company executive list is based on the `ExecutiveEmployee` structure. *You will have to keep track of the number of executives.*
- The company executive constructor should initialize any pointers to `nullptr` and any variables to `0` or `""`.
- `AddPersonnel()`. This function will take as an argument the number of persons to be added to the database. It returns **true** if these persons have been successfully added, **false** otherwise. It should test to see if the maximum size has not been encroached. Any new executives have to be added to the list of executives. This means creating a new list copied from the old list with space for the new executives at the end. **Be sure to delete the old list**. Each executive should be asked the following:
	- Enter the executive's name:
	- Enter the executive's position:
	- Enter the executive's base salary:
	- Enter the executive's annual stock option dividend:
	- Enter the executive's annual perquisites:
-`FindPersonnel()`. This function will take as arguments the name of the person to be found, and a reference to the person found. That person is of type `ExecutiveEmployee`. The function returns **true** if the person is found, **false** otherwise.
- `CalculateSalary()`. This function takes as an argument the name of a person and returns the **person's salary**. *If the person is not found*, `0.00` is returned. **If the person is found, then salary is the base salary `plus` the annual stock option dividend `plus` the annual perquisites.**

**Be sure to clean up on destruction.**


**Be sure to add comments throughout the code where necessary.**

### Sample Output
The main function has been given to you in the file `CompanyMain.cpp`.


A sample run is as follows:
```
    Add three persons to each of your databases.
    Enter the employee's name: Michel Goulet
    Enter the employee's position: Software Developer
    Enter the employee's base salary: 78000
    Enter the employee's annual profit sharing amount: 3000
    Enter the employee's annual performance bonus: 2000
    
    Enter the employee's name: Maryam Barakat
    Enter the employee's position: Project Manager
    Enter the employee's base salary: 110000
    Enter the employee's annual profit sharing amount: 4000
    Enter the employee's annual performance bonus: 4000
    
    Enter the employee's name: Mark Crawford
    Enter the employee's position: Senior Design Engineer
    Enter the employee's base salary: 97000
    Enter the employee's annual profit sharing amount: 5000
    Enter the employee's annual performance bonus: 3000
    
    
    Enter the executive's name: Rakesh Patel
    Enter the executive's position: Chief Technology Officer
    Enter the executive's base salary: 900000
    Enter the executive's annual stock option dividend: 1200000
    Enter the executive's annual perquisites: 45000
    
    Enter the executive's name: Christopher Smith
    Enter the executive's position: Vice President
    Enter the executive's base salary: 500000
    Enter the executive's annual stock option dividend: 100000
    Enter the executive's annual perquisites: 33000
    
    Enter the executive's name: Anna Pawlowska
    Enter the executive's position: President
    Enter the executive's base salary: 3000000
    Enter the executive's annual stock option dividend: 900000
    Enter the executive's annual perquisites: 160000
    
    
    Enter a name to search for in both databases: Christopher Smith
    Christopher Smith works as Vice President and earned $633000.00 last year.
    
    Add two more persons to your databases.
    Enter the employee's name: Taha Ali
    Enter the employee's position: Senior Test Engineer
    Enter the employee's base salary: 88000
    Enter the employee's annual profit sharing amount: 1000
    Enter the employee's annual performance bonus: 900
    
    Enter the employee's name: Parissa Belfort
    Enter the employee's position: Team Lead
    Enter the employee's base salary: 100000
    Enter the employee's annual profit sharing amount: 5000
    Enter the employee's annual performance bonus: 6000
    
    
    Enter the executive's name: Mark Cuban
    Enter the executive's position: Owner
    Enter the executive's base salary: 3000000
    Enter the executive's annual stock option dividend: 3000000
    Enter the executive's annual perquisites: 1000000
    
    Enter the executive's name: Trevor Hansen
    Enter the executive's position: Senior Vice President
    Enter the executive's base salary: 750000
    Enter the executive's annual stock option dividend: 120000
    Enter the executive's annual perquisites: 60000
    
    
    Enter another name to search for in both databases: Parissa Belfort
    Parissa Belfort works as Team Lead and earned $111000.00 last year. 
```

## Reflection
Study your workshop solution, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.
Create a **text** file named `reflect.txt` that contains the answers to the following questions 

1. Describe in general the types of polymorphism in C++.
2. Explain the differences and similarities between parametric polymorphism and adhoc polymorphism.
3. Why should templated code be implemented in a header file?



## Submission

Test and demonstrate the execution of your program using the data given to you and make sure your code is generating output similar to the above example.



- Please email the files: `CompanyCommon.h`, `CompanyEmployee.h` , `CompanyExecutive.h` in addition to the `reflect.txt` to email address: <mufleh.al-shatnawi@senecacollege.ca>

- Email Subject Line should be **`SEP200-NAA-WS05`**

####  Late submissions will incur a 25% penalty each day.

**:warning:Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Resubmissions will attract a penalty.

