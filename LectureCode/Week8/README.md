# Week8 Examples 


## Composition, Association and Aggregation

It is possible for a class to contain an instance of another class (composition), a collection of instances of another class (aggregation), or an instance of another class which in turn contains an instance of the class itself (association). We will look at three examples, one of each type.

- In the first example, the class Person contains an instance of the class Name. This is *composition* (Check **Composition** directory): `Name.h`, `Name.cpp`, `Person.h`, `Person.cpp` and `CompositionMain.cpp`.
- In the second example, a Course contains a Room, and a Room contains a Course. The room and course are associated with each other. This is association. The course and room each contain a name as well (Check **Association** directory): `Name.h`, `Name.cpp`, `Course.h`, `Course.cpp`, `Room.h`, `Room.cpp` and `AssociationMain.cpp`.
- In the third example, the class Club contains an array of pointers to Names which have been created outside of the class. This is aggregation (Check **Aggregation** directory): `Name.h`, `Name.cpp`, `Club.h`, `Club.cpp` and `AggregationMain.cpp`.
- The third example above used an array of pointers where the size of the array is known. *What if the size of the array is not known?* We will have to use a **double pointer**! See the following code that allocates and de-allocates the array of pointers in batches of five (Check **Aggregation2** directory): `Name.h`, `Name.cpp`, `Club.h`, `Club.cpp` and `AggregationMain.cpp`.
- It is possible to have an *aggregation* of different types if these types are related. The following example shows an aggregation of different types which are related through a base class. The types are **Hammer** and **Screwdriver**. They are both tools and are derived from a **ToolIf** interface class (Check **Toolbox** directory): `ToolIf.h`, `ToolIf.cpp`, `Hammer.h`, `Screwdriver.h`, `Toolbox.h` and `ToolMain.cpp`. A sample run is shown in `SampleRun.txt`.

## Dynamic Types

Code that relies on *dynamic type* identification using the operator `typeid()` can be seen at (Check **DynamicType** directory): `DynamicType.cpp`.

## Casts

C++ introduces four types of casts.

- **const_cast** can be used to remove or add `const` to a variable. This can be useful if it is necessary to *add/remove constness from a variable*. (Check **ConstCast** directory): `ConstCast.cpp`
- **static_cast** is used for the normal/ordinary type conversion. This is also the cast responsible for implicit type coersion and can also be called explicitly. *You should use it in cases like converting* `float` to `int`, `char` to `int`, etc. (Check **StaticCast** directory):`StaticCast.cpp`
- **dynamic_cast** is used for handling *polymorphism*. You only need to use it when you're casting to a derived class. This is exclusively to be used in inheritance when you cast from base class to derived class. (Check **DynamicCast** directory): `DynamicCast.cpp`
- **reinterpret_cast** is the trickiest to use. It is used for reinterpreting bit patterns and is extremely low level. It's used primarily for things like turning a raw data bit stream into actual data or storing data in the low bits of an aligned pointer. (Check **ReinterpretCast** directory):`ReinterpretCast.cpp`





