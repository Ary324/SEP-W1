# Workshop 6: A Sports Association
## Due Date: Friday, July 15, 2022 before 23:59
## Workshop Objectives  
This workshop will test your ability to use aggregation, enumerations, and overriding of operators.


## Submission Policy
The workshop should contain ***only work done by you this term*** or provided by your professor.  Work done in another term (by you or somebody else), or work done by somebody else and not **clearly identified/cited** is considered plagiarism, in violation of the Academic Integrity Policy.

Every file that you submit must contain (as a comment) at the top **your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

- Add comments throughout the code where necessary.

- If the file contains only your work, or work provided to you by your professor, add the following message as a comment at the top of the file:

    > I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

- If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which parts of the assignment are given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrong doing.

## Introduction and Workshop Tasks
You will create at least the following classes in addition to other classes that are given to you:
- `BaseballTeam`
- `HockeyTeam`
- `SportsAssociation`

A sports association is going to contain an aggregate of sports teams. In our workshop, there are *two types* of sports teams - a *hockey* team and a *baseball* team. A *hockey* team will keep track of a team's **wins, losses, ties** and will calculate points based on these. A *baseball* team will keep track of a team's **wins and losses** and will calculate a winning percentage based on these (percentage in the context of baseball is a number between `0.000` and `1.000`).

The main sports association program will create one sports association and add teams to it based on user input.

For this workshop, the main sports association program is given to you: `SportsMain.cpp`. The Team abstract base class is also given to you as well as source code for creating a team: `Team.h` and `Team.cpp`.

More details are given below:


### The Team Abstract Class
The Team abstract class contains three functions (pure virtual) which **will be completed in the derived classes**:

- `GetName()`. This function returns the name of the team.
- `display()`. This function displays information about the team.
- `operator==()`. This function determines if one team is equal to another team. That is, if they are both *hockey* teams and they have the **same number of points**. Or if they are both *baseball* teams and they have the **same winning percentage**.

`Team.cpp` contains a function to create a team based on user input:
- `CreateTeam`. This function creates and returns a pointer to a team based on user input.




### The Baseball Team
The *baseball* team completes the abstract class and adds a constructor. The baseball team has a **name, the number of wins, the number of losses, and the winning percentage**:

- `BaseballTeam()`. This function will take as arguments the name of the team, the wins, and the losses. The winning percentage can be calculated here from the number of wins and losses. *The winning percentage is actually a decimal, not a percent*, and is calculated as follows: `wins/(wins+losses)`.
- `GetName()`. This function returns the name of the team.
- `display()`. This function displays information about the team. It returns an error status according to the enumeration in the base class. If all data is valid, it will display **the team's name, wins, losses and winning percentage**.
- `operator==()`. This function determines if one team is **equal** to another team. If both teams are *baseball* teams and they both have the **same winning percentage**, the function returns `true`. `False` otherwise.




### The Hockey Team
The *hockey* team completes the abstract class and adds a constructor. The hockey team has a **name, the number of wins, the number of ties, the number of losses, and the total points**:

- `HockeyTeam()`. This function will take as arguments the name of the team, the wins, the ties, and the losses. The points can be calculated here as follows: `points=2*wins+ties`.
- `GetName()`. This function returns the name of the team.
- `display()`. This function displays information about the team. It returns an error status according to the enumeration in the base class. If all data is valid, it will display the team's **name, wins, ties, losses and points**.
- `operator==()`. This function determines if one team is equal to another team. If both teams are *hockey* teams and they both have the same number of points, the function returns `true`. `False` otherwise.

### The Sports Association
The sports association has a name and contains an **aggregate of teams**. These teams could be *hockey* teams, *baseball* teams or both. We will limit the number of teams to `4`. It has the following functions:

- `SportsAssociation()`. This function will take as an argument the name of the sports association.
- `operator+=()`. This function overrides the `+= operator` to add a team to the sports association. If the team added is **"equal"** to one of the existing teams, this function will *print out the names of the two teams*. To determine equality, use the `operator==` overload in the *hockey* team and *baseball* team classes. This function will also print out an error message if the number of teams has exceeded the limit (which in this example is `4` teams).
- `display()`. This function performs no validation of data. It displays the name of the sports association along with calling the `display()` function for each team in its aggregation.


**Be sure to add comments throughout the code where necessary.**

### Sample Output
The main function has been given to you in the file `SportsMain.cpp` and the Teams class in the files `Team.h` and `Team.cpp`.


A sample run is as follows:
```
    Enter 1 for a baseball team, or
    enter 2 for a hockey team.
    1
    What's the team's name? Rexdale Jays
    Enter the number of wins: 32
    Enter the number of losses: 16
    
    Enter 1 for a baseball team, or
    enter 2 for a hockey team.
    2
    What's the team's name? Rexdale Warriors
    Enter the number of wins: 23
    Enter the number of ties: 5
    Enter the number of losses: 18
    
    Enter 1 for a baseball team, or
    enter 2 for a hockey team.
    2
    What's the team's name? Rexdale Warriors 2
    Enter the number of wins: 15
    Enter the number of ties: 4
    Enter the number of losses: 16
    
    Enter 1 for a baseball team, or
    enter 2 for a hockey team.
    1
    What's the team's name? Rexdale Leafs
    Enter the number of wins: 32
    Enter the number of losses: 16
    Rexdale Jays is similar to Rexdale Leafs.

    The Rexdale Sports Association has the following teams:
    Rexdale Jays has 32 wins and 16 losses for a winning percentage of 0.666667.
    Rexdale Warriors has 23 wins, 18 ties, and 5 losses for 64 points.
    Rexdale Warriors 2 has 15 wins, 16 ties, and 4 losses for 46 points.
    Rexdale Leafs has 32 wins and 16 losses for a winning percentage of 0.666667. 
```

## Reflection
Study your workshop solution, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.
Create a **text** file named `reflect.txt` that contains the answers to the following questions 

1. What variable would you add to the *hockey* team class and to the *baseball* team class to associate each with the sports association?
2. If you have a choice, which is better - inheritance or composition?
3. Why is inheritance, if taken to an extreme, considered unreliable?



## Submission

Test and demonstrate the execution of your program using the data given to you and make sure your code is generating output similar to the above example.



- Please email the files: `SportsAssociation.h`, `SportsAssociation.cpp` , `HockeyTeam.h` , `HockeyTeam.cpp` , `BaseballTeam.h`, `BaseballTeam.cpp` in addition to the `reflect.txt` to email address: <mufleh.al-shatnawi@senecacollege.ca>

- Email Subject Line should be **`SEP200-NAA-WS06`**

####  Late submissions will incur a 25% penalty each day.

**:warning:Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Resubmissions will attract a penalty.

