# Workshop 10:  Multiple Inheritance
## Due Date: Friday, August 12, 2022 before 23:59
## Workshop Objectives  
This Workshop will test your ability to use **multiple inheritance** in the design of an amphibious *vehicle* class. This class will inherit from both an *automobile* class and a *boat* class. The workshop will also test your ability to use enumerations, exceptions, and the smart pointer.


## Submission Policy
The workshop should contain ***only work done by you this term*** or provided by your professor.  Work done in another term (by you or somebody else), or work done by somebody else and not **clearly identified/cited** is considered plagiarism, in violation of the Academic Integrity Policy.

Every file that you submit must contain (as a comment) at the top **your name**, **your Seneca email**, **Seneca Student ID** and the **date** when you completed the work.

- Add comments throughout the code where necessary.

- If the file contains only your work, or work provided to you by your professor, add the following message as a comment at the top of the file:

    > I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

- If the file contains work that is not yours (you found it online or somebody provided it to you), **write exactly which parts of the assignment are given to you as help, who gave it to you, or which source you received it from.**  By doing this you will only lose the mark for the parts you got help for, and the person helping you will be clear of any wrong doing.

## Introduction and Workshop Tasks
The base class for this workshop is called `Vehicle`. The classes `Automobile` and `Boat` both inherit from this class. It should be possible to create an object of type `Automobile` to represent an automobile, and it should be possible to create an object of type `Boat` to represent a boat. Since an *amphibious vehicle* is both a boat and an automobile, the class `AmphibiousVehicle` inherits from both `Boat` and `Automobile`.

### The Vehicle class.
The `Vehicle` class is an abstract class that declares an error status structure as well as function interfaces required by all derived classes. The class has been started for you and can be found at `Vehicle.h`. It contains the following:

- The `Err_Status` enumeration is used for all derived classes and should the error status for *success*, *out of fuel*, *fuel overflow*, and *incorrect mode*.
- The `Travel` function takes distance as an argument and returns an error status.
- The `AddFuel` function takes amount as an argument and returns an error status.
- The `GetFuel` function simply returns the amount of fuel left in the tank.
- The `GetCost` function simply returns the accumulated cost of all fuel purchases.

### The Boat class.
The fuel efficiency for a boat is given in *litres per hour*. This assumes a **constant travelling speed**. The `Boat` class has been started for you at `Boat.h`. It completes the abstract `Vehicle` class as follows:

- Add variables for *name*, *litres consumed per hour*, *fuel in the tank* and *accumulated cost*. Assume the boat travels at a constant speed of `20.0 km/hour`. Assume the cost per litre of boat fuel is `$1.60`. Assume the tank capacity is `150.0L` and the fuel efficiency is `20L/hour`.
- The constructor passes through the boat's name, the litres consumed per hour, and the initial fuel in the tank. Be sure to initialize the cost based on this fuel. **Print out a message indicating how much fuel has been added and its cost**.
- The `Travel` function should accept distance as an argument and return an error status. Based on the distance travelled and the constant travelling speed, the time of travel can be calculated. Knowing the litres consumed per hour, one can calculate the amount of fuel consumed. *If the fuel consumed is greater than the fuel in the tank, an exception is thrown with the message: "Boat out of fuel"*. The boat does not travel if there isn't enough fuel in the tank! If there is enough fuel, decrease the fuel in the tank by the fuel consumed, and calculate the cost of the travel. **Print out a message showing how much fuel is left in the tank, how far the boat travelled, and the cost of the travel**.
- The `AddFuel` function should accept an amount as an argument and return an error status. If the amount added will cause the tank to *overflow*, set the return status to fuel overflow. Readjust the amount to result in a full tank. **Print out an error message that includes the actual amount added and the actual cost**. If the amount added does not result in an overflow, calculate the cost and add the amount to the fuel in the tank. **Print out a message showing the amount added and the cost**. Be sure to always add the actual cost to the accumulated cost in either case.
- The `GetFuel` function simply returns the amount of fuel in the tank.
- The `GetCost` function simply returns the accumulated cost of all the fuel purchased.

### The Automobile class.
The fuel efficiency for an automobile is given as *L per 100km*. The `Automobile` class has been started for you at `Automobile.h`. It completes the abstract `Vehicle` class as follows:

- Add variables for *name*, *fuel efficiency (L per 100km)*, *fuel in the tank* and *accumulated cost*. Assume the cost per litre of fuel is `$1.30`. Assume the tank capacity is `50.0L` and the fuel efficiency is `10L/100km`.
- The constructor passes through the automobiles's name, the fuel efficiency, and the initial fuel in the tank. Be sure to initialize the cost based on this fuel. **Print out a message indicating how much fuel has been added and its cost**.
- The `Travel` function should accept distance as an argument and return an error status. Based on the distance travelled and the fuel efficiency, one can calculate the amount of fuel consumed. *If the fuel consumed is greater than the fuel in the tank, an exception is thrown with the message: "Automobile out of fuel"*. The automobile does not travel if there isn't enough fuel in the tank! If there is enough fuel, decrease the fuel in the tank by the fuel consumed, and calculate the cost of the travel. **Print out a message showing how much fuel is left in the tank, how far the automobile travelled, and the cost of the travel**.
- The `AddFuel` function should accept an amount as an argument and return an error status. If the amount added will cause the tank to *overflow*, set the return status to fuel overflow. Readjust the amount to result in a full tank. **Print out an error message that includes the actual amount added and the actual cost**. If the amount added does not result in an overflow, calculate the cost and add the amount to the fuel in the tank. **Print out a message showing the amount added and the cost**. Be sure to always add the actual cost to the accumulated cost in either case.
- The `GetFuel` function simply returns the amount of fuel in the tank.
- The `GetCost` function simply returns the accumulated cost of all the fuel purchased.

### The AmphibousVehicle class.
This class runs in two modes: *automobile* or *boat*. If it runs in the automobile mode, it will travel and add fuel to the automobile portion of the amphibious vehicle. Likewise, if run in the boat mode, it will travel and add fuel to the boat portion of the amphibious vehicle. The `AmphibiousVehicle` class therefore inherits from both the `Boat` class and the `Automobile` class. It has been started for you at `AmphibiousVehicle.h`. Please complete it as follows:

- Add a variable for the *name of the amphibious vehicle* and add a *variable for the operating mode*.
- Add three constant public class variables indicating these modes: **none, automobile, boat**.
- The constructor passes through the name of the amphibious vehicle. This name should also be passed through to the boat and automobile classes.
- The `Travel` function takes as an argument the distance and returns error status. **Depending on the mode, the travel function will call either the travel function of the automobile class or the travel function of the boat class**. The travel function should be run in a **try-catch** block. If an exception is thrown, it should be caught here. The only exception we are expecting is a message from either the boat or the automobile. Be sure to set the error status to out of fuel.
- The `AddFuel` function takes as an argument the amount of fuel and returns error status. **Depending on the mode, the add fuel function will call either the add fuel function of the automobile class or the add fuel function of the boat class**.
- Add **getter functions** for name, fuel and cost. When getting the fuel, be sure to return the total fuel used by both the boat and the automobile portions of the amphibious vehicle. Likewise, when getting the cost, be sure to return the costs of both the boat and automobile.
- The `UnsetModefunctions` unsets a mode, and a `SetMode` function sets a mode. For instance, if we are changing from the automobile mode to the boat mode, we have to unset the automobile mode then set the boat mode. **Do this using bitwise expressions**.

### AmphibiousVehicleMain
The file is used to test the amphibious vehicle class. It can be found at `AmphibiousVehicleMain.cpp`. There is only one task:

- Add a **smart pointer** of type `AmphibiousVehicle`. Call the amphibious vehicle object ampVehicle and name this amphibious vehicle as "Hydra Spyder".

Exceptions are very useful for having your code exit gracefully if something goes wrong. The following example shows an exception that would normally cause a program to crash, which is caught and handled and allows for a controlled shut down of the program: `GeneralException.cpp`

**Be sure to add comments throughout the code where necessary.**

### Sample Output
A sample run looks as follows:
```
	Hydra Spyder boat has added 150L at a cost of $240.

	Hydra Spyder automobile has added 50L at a cost of $65.

	The automobile will travel 200km
	Hydra Spyder automobile has 30.00L of fuel left. It has travelled 200.00km at a cost of $26.00.

	The boat will travel 20km
	Hydra Spyder boat has 130.00L of fuel left. It has travelled 20.00km at a cost of $32.00.

	Hydra Spyder in total has spent $305.00 on fuel.

	Adding 30L of fuel to the boat
	Hydra Spyder boat has encountered a fuel overflow. The amount added is actually 20.00L at a cost of $32.00.
	The Hydra Spyder boat cannot add 30L of fuel.

	The boat will travel 200km
	Boat out of fuel
	The Hydra Spyder boat cannot travel 200km.

	Adding 30L of fuel to the automobile
	Hydra Spyder automobile has encountered a fuel overflow. The amount added is actually 20.00L at a cost of $26.00.
	The Hydra Spyder automobile cannot add 30L of fuel.

	The automobile will travel 300km
	Hydra Spyder automobile has 20.00L of fuel left. It has travelled 300.00km at a cost of $39.00.

	Hydra Spyder in total has spent $363.00 on fuel.
```

## Reflection
Study your workshop solution, reread the related parts of the course notes, and make sure that you have understood the concepts covered by this workshop.
Create a **text** file named `reflect.txt` that contains the answers to the following questions 


1. Why has multiple inheritance been a controversial issue for many years?
2. What solves the **"Diamond Problem"**?
3. Does the **"Diamond Problem"** actually exist in this workshop? Why or why not?




## Submission

Test and demonstrate the execution of your program using the data given to you and make sure your code is generating output similar to the above example.



- Please email the files: `Vehicle.h`, `Boat.h`, `Boat.cpp`, `Automobile.h`, `Automobile.cpp`, `AmphibiousVehicle.h`, `AmphibiousVehicle.cpp`, `AmphibiousVehicleMain.cpp` in addition to the `reflect.txt` to email address: <mufleh.al-shatnawi@senecacollege.ca>

- Email Subject Line should be **`SEP200-NAA-WS10`**

####  Late submissions will incur a 25% penalty each day.

**:warning:Important:** Please note that a successful submission does not guarantee full credit for this workshop. If the professor is not satisfied with your implementation, your professor may ask you to resubmit. Resubmissions will attract a penalty.

