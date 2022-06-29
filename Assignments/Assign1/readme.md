# Assignment 1: Card Game
## Due Date: Friday, July 22, 2022 before 23:59


## Submission Policy
The assignment should contain ***only work done by you this term*** or provided by your professor.  Work done in another term (by you or somebody else), or work done by somebody else and not **clearly identified/cited** is considered plagiarism, in violation of the Academic Integrity Policy.

Every file that you submit must contain (as a comment) at the top **your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

- Add comments throughout the code where necessary.

- If the file contains only your work, or work provided to you by your professor, add the following message as a comment at the top of the file:

    > I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

- If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which parts of the assignment are given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrong doing.

## Introduction and Assignment Tasks

You will create at least three classes as follows:
- `PlayerBase`
- `PlayerYouth`
- `PlayerAdult`

## Business Case (Marketing, Project Manager, Senior Executives)
There is a market for gaming software. One of the most popular card games is "21". We need to write software that simulates this card game so players can play **without actual cards**. In addition to that, the gaming software can *add features* to the game "21" which are not available with physical cards.


## Requirements (Marketing, Project Manager, Project Lead)

For simulating the card game "21", the following requirements **must be implemented**:

1. The sum of the cards must be as close to `21` as possible without going over.
2. All cards have integral (*integer*) values.
3. Introduce a **high-definition mode** to add granularity to the card draws. In this mode all cards have **decimal (double floating point)** values.
4. The card draws must be **random within a certain range**. These can be called **"attack cards"**.
5. Introduce **"dependent cards"** which subtract from the card total to add complexity to the game. These cards are drawn at **random within a certain range**.
6. **"Dependent cards"** always have integral (*integer*) values.
7. Allow two players at a time.
8. The mode of the game has to be **determined by the users before any objects are created**.
9. For each game, the players can make a *bet* within a certain range.

## Design (Project Lead, Senior Engineers)
### Each Player
- Each player has a name.
- Each player has cash.
- Each player has a list of dependent cards which are always integral *regardless of the game mode*.
- Each player's **dependent cards** have a value between `1` and `5` inclusive.
- Each player can be *created* with name *set to an empty string*, *no dependent cards*, and `$1000.00` in cash.
- Each player can be *created* with name *passed by argument*, *no dependent cards*, and `$1000.00` in cash.
- Each player can be created from another player.
- Each player can be assigned all its data from another player through the `=` operator.
- Each player provides accessor functions to **set** or **get** the name.
- Each player provides a function to **add** dependent cards, by **deleting** any existing list of dependent cards first.
- Each player provides a function to **add** one dependent card to an existing list of dependent cards.
- Each player provides a function to **sum** the dependent cards.
- Each player provides functions to **get cash** and to **add cash** (could be negative).
- Each player *cleans itself up before destruction*.

### The Players

- The players overloading the `==`, `<` and `>` operators to see respectively if they are **equal**, if the first player has **less points than** the second, or if the first player has **more points than** the second.
- The players overloading the `<<` and `>>` to respectively add cash or remove cash from a player.

### The Youth Player
In addition to those qualities for a player, the youth player has the following:

- The youth player has a list of **attack cards**  which can be *integral* (regular mode) or *decimal* (high definition mode).
- The youth player's **attack cards** have a value between `1` and `10` inclusive.
- The youth player's *high definition* **attack cards** will have values to *three decimal places*.
- The youth player can be created with *no attack cards*.
- The youth player can be created with a *name passed by argument* and *no attack cards*.
- The youth player can be created from another youth player.
- The youth player can be assigned all its data from another youth player through the `=` operator.
- The youth player provides a function to **add** attack cards, by **deleting** any existing list of attack cards first.
- The youth player provides a function to **add** one attack card to an existing list of attack cards.
- The youth player provides a function to **sum** the attack cards.
- The youth player provides a function to **sum all cards** (*sum the attack cards minus sum the dependent cards*).
- The youth player cleans itself up before destruction.

### The Adult Player

- The adult player has a list of **attack cards** which can be *integral* (regular mode) or *decimal* (high definition mode).
- The adult player's **attack cards** have a value between `1` and `15` inclusive.
- The adult player's high definition **attack cards** will have values to *three decimal places*.
- The adult player can be created with *no attack cards*.
- The adult player can be created with a *name passed by argument* and *no attack cards*.
- The adult player can be created from another adult player.
- The adult player can be assigned all its data from another adult player through the `=` operator.
- The adult player provides a function to **add** attack cards, by  **deleting** any existing list of attack cards first.
- The adult player provides a function to **add** one attack card to an existing list of attack cards.
- The adult player provides a function to **sum** the attack cards.
- The adult player provides a function to **sum all cards** (*sum the attack cards minus sum the dependent cards*).
- The adult player cleans itself up before destruction.

## Implementation (Junior and Senior Engineers)
### The Card Game "21"
As an engineer on this project, you have to implement the code for the card game "21".

1. Create a **UML diagram** showing the classes and class relationships.
2. Implement the classes for the players.
3. A card game has been created for you, written partially in C++ but written mostly in pseudo-code. Once you have implemented your classes, implement the pseudo-code according to the instructions found in the main function of `PlayerMain.cpp`. *You might have to implement a version of the factory design pattern to create objects at run-time instead of compile time*.

### Testing and Rework (Junior and Senior Engineers, Product Support)

- Be sure to test your code for **regular mode** and **high definition** mode.
- **Be sure to add comments throughout the code where necessary.**
- A correctly running card "21" program in high definition mode might look something like:
```
    How much do you both want to bet? (min$10, max $300): $300

    Noah, how many dependent cards to you want? 4
    Noah, how many attack cards to you want? 7
    Noah, the sum of your cards is 38.86
    Do you want to add a dependent card? [Y,N]y
    Noah, the sum of your cards is 37.86
    Do you want to add an attack card? [Y,N]n
    Noah, the sum of your cards is 37.86
    
    Kenneth, how many dependent cards to you want? 2
    Kenneth, how many attack cards to you want? 4
    Kenneth, the sum of your cards is 24.389
    Do you want to add a dependent card? [Y,N]y
    Kenneth, the sum of your cards is 21.389
    Do you want to add an attack card? [Y,N]n
    Kenneth, the sum of your cards is 21.389
    
    Noah has 37.86 points.
    Kenneth has 21.389 points.
    
    Noah has a sum of 37.86, which is over the limit.
    Kenneth has a sum of 21.389, which is over the limit.
    Both players are over the limit and have been disqualified.
    
    Noah has $1000.
    Kenneth has $1000.
    
    How much do you both want to bet? (min$10, max $300): $300
    
    Noah, how many dependent cards to you want? 2
    Noah, how many attack cards to you want? 4
    Noah, the sum of your cards is 8.951
    Do you want to add a dependent card? [Y,N]n
    Noah, the sum of your cards is 8.951
    Do you want to add an attack card? [Y,N]y
    Noah, the sum of your cards is 12.333
    
    Kenneth, how many dependent cards to you want? 3
    Kenneth, how many attack cards to you want? 3
    Kenneth, the sum of your cards is 12.068
    Do you want to add a dependent card? [Y,N]n
    Kenneth, the sum of your cards is 12.068
    Do you want to add an attack card? [Y,N]y
    Kenneth, the sum of your cards is 27.839
    
    Noah has 12.333 points.
    Kenneth has 27.839 points.
    
    Kenneth has a sum of 27.839, which is over the limit.
    Kenneth has been disqualified for going over the limit. Noah has won.
    
    Noah has $1300.
    Kenneth has $700.
    
    How much do you both want to bet? (min$10, max $300): $300
    
    Noah, how many dependent cards to you want? 2
    Noah, how many attack cards to you want? 5
    Noah, the sum of your cards is 34.807
    Do you want to add a dependent card? [Y,N]y
    Noah, the sum of your cards is 30.807
    Do you want to add an attack card? [Y,N]n
    Noah, the sum of your cards is 30.807
    
    Kenneth, how many dependent cards to you want? 2
    Kenneth, how many attack cards to you want? 2
    Kenneth, the sum of your cards is 0.006
    Do you want to add a dependent card? [Y,N]n
    Kenneth, the sum of your cards is 0.006
    Do you want to add an attack card? [Y,N]y
    Kenneth, the sum of your cards is 5.67
    
    Noah has 30.807 points.
    Kenneth has 5.67 points.
    
    Noah has a sum of 30.807, which is over the limit.
    Noah has been disqualified for going over the limit. Kenneth has won.
    
    Noah has $1000.
    Kenneth has $1000.
    
    How much do you both want to bet? (min$10, max $300): $300
    
    Noah, how many dependent cards to you want? 4
    Noah, how many attack cards to you want? 4
    Noah, the sum of your cards is 10.61
    Do you want to add a dependent card? [Y,N]n
    Noah, the sum of your cards is 10.61
    Do you want to add an attack card? [Y,N]y
    Noah, the sum of your cards is 11.647
    
    Kenneth, how many dependent cards to you want? 1
    Kenneth, how many attack cards to you want? 3
    Kenneth, the sum of your cards is 28.993
    Do you want to add a dependent card? [Y,N]y
    Kenneth, the sum of your cards is 24.993
    Do you want to add an attack card? [Y,N]n
    Kenneth, the sum of your cards is 24.993
    
    Noah has 11.647 points.
    Kenneth has 24.993 points.
    
    Kenneth has a sum of 24.993, which is over the limit.
    Kenneth has been disqualified for going over the limit. Noah has won.
    
    Noah has $1300.
    Kenneth has $700.
    
    How much do you both want to bet? (min$10, max $300): $250
    
    Noah, how many dependent cards to you want? 2
    Noah, how many attack cards to you want? 3
    Noah, the sum of your cards is 4.32
    Do you want to add a dependent card? [Y,N]n
    Noah, the sum of your cards is 4.32
    Do you want to add an attack card? [Y,N]y
    Noah, the sum of your cards is 5.426
    
    Kenneth, how many dependent cards to you want? 3
    Kenneth, how many attack cards to you want? 5
    Kenneth, the sum of your cards is 32.518
    Do you want to add a dependent card? [Y,N]y
    Kenneth, the sum of your cards is 31.518
    Do you want to add an attack card? [Y,N]n
    Kenneth, the sum of your cards is 31.518
    
    Noah has 5.426 points.
    Kenneth has 31.518 points.
    
    Kenneth has a sum of 31.518, which is over the limit.
    Kenneth has been disqualified for going over the limit. Noah has won.
    
    Noah has $1550.
    Kenneth has $450.
    
    How much do you both want to bet? (min$10, max $300): $255
    
    Noah, how many dependent cards to you want? 3
    Noah, how many attack cards to you want? 3
    Noah, the sum of your cards is 15.57
    Do you want to add a dependent card? [Y,N]n
    Noah, the sum of your cards is 15.57
    Do you want to add an attack card? [Y,N]n
    Noah, the sum of your cards is 15.57
    
    Kenneth, how many dependent cards to you want? 3
    Kenneth, how many attack cards to you want? 4
    Kenneth, the sum of your cards is 17.938
    Do you want to add a dependent card? [Y,N]n
    Kenneth, the sum of your cards is 17.938
    Do you want to add an attack card? [Y,N]n
    Kenneth, the sum of your cards is 17.938
    
    Noah has 15.57 points.
    Kenneth has 17.938 points.
    
    Kenneth has won!
    
    Noah has $1295.
    Kenneth has $705.
    
    How much do you both want to bet? (min$10, max $300): $300
    
    Noah, how many dependent cards to you want? 5
    Noah, how many attack cards to you want? 4
    Noah, the sum of your cards is 0.516
    Do you want to add a dependent card? [Y,N]n
    Noah, the sum of your cards is 0.516
    Do you want to add an attack card? [Y,N]y
    Noah, the sum of your cards is 3.598
    
    Kenneth, how many dependent cards to you want? 2
    Kenneth, how many attack cards to you want? 5
    Kenneth, the sum of your cards is 30.949
    Do you want to add a dependent card? [Y,N]y
    Kenneth, the sum of your cards is 29.949
    Do you want to add an attack card? [Y,N]n
    Kenneth, the sum of your cards is 29.949
    
    Noah has 3.598 points.
    Kenneth has 29.949 points.
    
    Kenneth has a sum of 29.949, which is over the limit.
    Kenneth has been disqualified for going over the limit. Noah has won.
    
    Noah has $1595.
    Kenneth has $405.
    
    How much do you both want to bet? (min$10, max $300): $300
    
    Noah, how many dependent cards to you want? 2
    Noah, how many attack cards to you want? 3
    Noah, the sum of your cards is 7.08
    Do you want to add a dependent card? [Y,N]n
    Noah, the sum of your cards is 7.08
    Do you want to add an attack card? [Y,N]y
    Noah, the sum of your cards is 16.825
    
    Kenneth, how many dependent cards to you want? 3
    Kenneth, how many attack cards to you want? 2
    Kenneth, the sum of your cards is 10.606
    Do you want to add a dependent card? [Y,N]n
    Kenneth, the sum of your cards is 10.606
    Do you want to add an attack card? [Y,N]y
    Kenneth, the sum of your cards is 12.179
    
    Noah has 16.825 points.
    Kenneth has 12.179 points.
    
    Noah has won!
    
    Noah has $1895.
    Kenneth has $105.
    
    How much do you both want to bet? (min$10, max $300): $110
    
    Noah, how many dependent cards to you want? 2
    Noah, how many attack cards to you want? 3
    Noah, the sum of your cards is 13.437
    Do you want to add a dependent card? [Y,N]n
    Noah, the sum of your cards is 13.437
    Do you want to add an attack card? [Y,N]n
    Noah, the sum of your cards is 13.437
    
    Kenneth, how many dependent cards to you want? 2
    Kenneth, how many attack cards to you want? 4
    Kenneth, the sum of your cards is 24.027
    Do you want to add a dependent card? [Y,N]y
    Kenneth, the sum of your cards is 21.027
    Do you want to add an attack card? [Y,N]n
    Kenneth, the sum of your cards is 21.027
    
    Noah has 13.437 points.
    Kenneth has 21.027 points.
    
    Kenneth has a sum of 21.027, which is over the limit.
    Kenneth has been disqualified for going over the limit. Noah has won.
    Player Kenneth is out of the game.
    
    Noah has $2005.
    Kenneth has $-5.
    
    The game is over.
    Noah has $2005.00
    Kenneth has $-5.00  
```


## Reflection
Study your assignment solution, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this assignment.
Create a **text** file named `reflect.txt` that contains the answers to the following questions 

1. In the `main()` function, the number of players is hardcoded to `2`. How could we modify the `main()` function to let the players decide how many players there are? (0.5 mark)
2. For this product, compare and contrast *polymorphism via the use of inheritance* with *parametric polymorphism*. (1 mark)
3. If we wished to add a nice graphical interface to this program, how would we do it? With C++? By interacting with another program? By adding a library? By using a different language entirely? (0.5 mark)

## Assignment TimeLine/Milestones
- **Days 1-7:** The players classes.
- **Days 8-14:** The `main()` function.
- **Days 15-21:** Putting it all together. Test and Rework. Questions.

## Marking Rubric
Assignment 1 is worth **`15%`** of your final grade and as such is marked out of 15 as follows:
|		|Does not meet expectations|Satisfactory|Good|Exceeds Expectations|
|-------|-------------------------|-------------|----|--------|
|The Player (2 marks)	   |Implementation does not meet the requirements|Implementation meets the most of the essential requirements|Implementation meets all requirements with minor errors|Implementation meets all requirements with no error|
|The Youth Player (3 marks)|Implementation does not meet the requirements|Implementation meets the most of the essential requirements|Implementation meets all requirements with minor errors|Implementation meets all requirements with no error|
|The Adult Player (3 marks)|Implementation does not meet the requirements|Implementation meets the most of the essential requirements|Implementation meets all requirements with minor errors|Implementation meets all requirements with no error		|
|The `main()` function (3 marks)|Implementation does not meet the requirements|Implementation meets the most of the essential requirements|Implementation meets all requirements with minor errors	|Implementation meets all requirements with no error|
|Documentation (i.e., comments and **UML diagram(s)**) (2 mark)|The submission does not contain documentation|Header ( `.h`) and implementation (`.cpp`) contain comments for most the functions inside the file, and the UML diagram is not documented|Header ( `.h`) and implementation (`.cpp`) contain comments for most the functions inside the file with Header guards, documents unclear code, and the UML diagram is documented|	Header ( `.h`) and implementation (`.cpp`) contain comments for all the functions inside the file  with Header guards , and the UML diagram is documented|
|Questions (2 marks)|Incorrect Answers or the answers are missing|Answers some questions correctly|Answers most questions correctly	|Answers all Questions correctly|

## Submission

Test and demonstrate the execution of your program using the data given to you and make sure your code is generating output similar to the above example.

- Please email all the source code files and all the created **UML diagram(s)** in addition to the `reflect.txt` to email address: <mufleh.al-shatnawi@senecacollege.ca>
- Note1: Make sure you saved the created **UML diagram(s)** as a `pdf` file.
- Note2: Your code files should have at least the following files: `PlayerBase.h`, `PlayerYouth.h`, `PlayerAdult.h` and `PlayerMain.cpp` in addition to any other files that can help you to create objects at **run time, not at compile time**. This means prompting the user of the mode (**regular** or **high definition**), then creating the objects.

- Email Subject Line should be **`SEP200-NAA-Assign01`**

####  Late submissions will incur a 15% penalty each day.

**:warning:Important:** Please note that a successful submission does not guarantee full credit for this assignment. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Resubmissions will attract a penalty.

