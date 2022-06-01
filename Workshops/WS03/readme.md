# Workshop 3: Amazon Purchases
## Due Date: Friday, June 10, 2022 before 23:59
## Workshop Objectives  
This workshop will test your ability to create and use base classes and derived classes.

## Submission Policy
The workshop should contain ***only work done by you this term*** or provided by your professor.  Work done in another term (by you or somebody else), or work done by somebody else and not **clearly identified/cited** is considered plagiarism, in violation of the Academic Integrity Policy.

Every file that you submit must contain (as a comment) at the top **your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

- Add comments throughout the code where necessary.

- If the file contains only your work, or work provided to you by your professor, add the following message as a comment at the top of the file:

    > I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

- If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which parts of the assignment are given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrong doing.

## Introduction and Workshop Tasks
This program records purchases from Amazon and calculates the cost. There are three types of items that a user can purchase - a *book*, a *DVD*, or a *digital music download*. For each item there is a **title**, **a list of authors**, and **a price**. For each item you need to get information and you need to calculate the costs. You will create four classes as follows:
- `GenericItem`
- `Book`
- `DVD`
- `DigitalMusic`

### The Generic Item
This contains everything that is common to all types of purchases.
- By default generic item will create an object with the title set to an *empty string*, the list of authors to a `nullptr`, the number of authors to **0**, and the price to **$0.00**.
- The generic item can also be created with the following data - *the title, the number of authors, and the price*. The **constructor** will prompt the user for the authors. Since the number of authors is not known before runtime, *dynamic memory* allocation will have to be used to get the list of authors.
- When asked to calculate the cost, generic item will simply return the price.
- When asked to get information, generic item will stream out the title, a list of authors, and the price to **2 decimal places**.
- Be sure to cleanup on object destruction.

### Book
This contains information specific to a book purchase.
- When asked to calculate the cost, the book will add a **10% penalty** to the price for using paper and **13%** of the price for the harmonized sales tax.
- When asked to get information, book will stream out information from the generic item that it is derived from. It will also stream out one line specifying: **"There is a 10% penalty for using paper."**

### DVD
This contains information specific to a DVD purchase.
- When asked to calculate the cost, the DVD will add a **5% penalty** to the price for using plastic and **13%** of the price for the harmonized sales tax.
- When asked to get information, the DVD will stream out information from the generic item that it is derived from. It will also stream out one line specifying: **"There is a 5% penalty for using plastic."**

### Digital Music Download.
This contains information specific to the purchase of digital music download.
- When asked to calculate the cost, the digital music download will add **13%** of the price for the harmonized sales tax.
- When asked to get information, the object will stream out information from the generic item that it is derived from.


To assist you with this workshop, you might want to look at **Student** folder which contains the sample code that keeps track of marks for students in three different ways. The default way is by percentages. The other two ways is to have letter grades (A,B,C,D,F) or to have number grades (0-5): `Student.h`, `Student.cpp`, `LetterStudent.h`, `LetterStudent.cpp`, `NumberStudent.h`, `NumberStudent.cpp` and `StudentMain.cpp`.

**Be sure to add comments throughout the code where necessary.**

### Sample Output
You have been given the main test program: `AmazonMain.cpp`. You have to create the header and CPP files for all the above classes.


A sample run is as follows:
```
    For testing purchases, please order one book, one DVD, and one digital download.

    FOR THE BOOK
    Enter the title: The Book
    Enter the price: 11.66
    Enter the number of authors: 3
    Enter the name of author 1 : Book Author1
    Enter the name of author 2 : Book Author2
    Enter the name of author 3 : Book Author3
    
    FOR THE DVD
    Enter the title: The DVD
    Enter the price: 34.99
    Enter the number of authors: 2
    Enter the name of author 1 : DVD Author1
    Enter the name of author 2 : DVD Author2
    
    FOR THE DIGITAL MUSIC DOWNLOAD
    Enter the title: Best Hits of Smoopey
    Enter the price: 21.49
    Enter the number of authors: 2
    Enter the name of author 1 : Smoopey1
    Enter the name of author 2 : Smoopey2
    
    Title:   The Book
    Authors: Book Author1, Book Author2, Book Author3.
    Price:   $11.66
    There is a 10% penalty for using paper.
    The real cost is $14.34
    
    Title:   The DVD
    Authors: DVD Author1, DVD Author2.
    Price:   $34.99
    There is a 5% penalty for using plastic.
    The real cost is $41.29
    
    Title:   Best Hits of Smoopey
    Authors: Smoopey1, Smoopey2.
    Price:   $21.49
    The real cost is $24.28
    
    The total cost is $79.91	
```
## Reflection
Study your workshop solution, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.
Create a **text** file named `reflect.txt` that contains the answers to the following questions 

1. If all three purchases were of type `DVD`, could `AmazonMain.cpp` use a for-next loop to get all information?
2. Since we have a `Book` purchase, a `DVD` purchase, and a `DigitalMusic` purchase, could `AmazonMain.cpp` use a for-next loop to get all information? Why?



## Submission

Test and demonstrate the execution of your program using the data given to you and make sure your code is generating output similar to the above example.



- Please email the files: `GenericItem.cpp`, `GenericItem.h` , `Book.cpp`, `Book.h`, `DigitalMusic.cpp`, `DigitalMusic.h`, `DVD.cpp`, `DVD.h` in addition to the `reflect.txt` to email address: <mufleh.al-shatnawi@senecacollege.ca>

- Email Subject Line should be **`SEP200-NAA-WS03`**

####  Late submissions will incur a 25% penalty each day.

**:warning:Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Resubmissions will attract a penalty.

