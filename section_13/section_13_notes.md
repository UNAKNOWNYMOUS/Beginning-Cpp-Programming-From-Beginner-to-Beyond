---
id: section_13_notes
aliases: []
tags: []
---

# OOP - Classes and Objects
## Section Overview
## What is Object-Oriented Programming?
### Procedural Programming
- Focus is on processes or actions that a program takes.
- Programs are typically a collection of functions.
- Data is declared separately.
- Data is passed as arguments into functions.
- Fairly easy to learn.
### Procedural programming - Limitations
- Functions need to know the structure of the data.
  - If the structure of the data changes many functions must be changed.
- As programs get larger they become more:
  - Difficult to understand.
  - Difficult to maintain.
  - Difficult to extend.
  - Difficult to debug.
  - Difficult to reuse code.
  - Fragile and easier to break.
### What is Objected-Oriented Programming?
- Classes and Objects:
  - Focus is on classes that model real-world domain entities.
  - Allows developers to think at a higher level of abstraction.
  - Used successfully in very large programs.
- Encapsulation:
  - Objects contains data AND operations that work on that data.
  - Abstract Data Type (ADT).
- Information-hiding:
  - Implementation-specific logic can be hidden.
  - Users of the class code to the interface since they don't need to know the implementation.
  - More abstraction.
  - Easier to test, debug, maintain, and extend.
- Reusability:
  - Easier to reuse classes in other applications.
  - Faster development.
  - Higher Quality.
- Inheritance:
  - Can create new classes in terms of existing classes.
  - Reusability.
  - Polymorphic classes.
- Polymorphism and more...
### Limitations
- Not a panacea:
  - OO Programming won't make bad code better.
  - Not suitable for all types of problems.
  - Not everything decomposes to a class.
- Learning curve:
  - Usually a steeper learning curve, especially for C++.
  - Many OO languages, many variations of OO concepts.
- Design:
  - Usually more up-front design is necessary to create good models and hierarchies.
- Programs can be:
  - Larger in size.
  - Slower.
  - More complex.
## What are Classes and Objects?
- Classes:
  - Blueprint from which objects are created.
  - A user-defined data-type.
  - Has attributes (data).
  - Has methods (functions).
  - Can hide data and methods.
  - Provides a public interface.
- Objects:
  - Created from a class.
  - Represents a specific instance of a class.
  - Can create many, many objects.
  - Each has its own identity.
  - Each can use the defined class methods.
## Declaring a Class and Creating Objects
- A class takes on the general form:
```cpp
class Class_Name
{
  // declarations;
};
```
- Best practice is to capitalize class names for user-defined classes.
## Accessing Class Members
- We can access:
  - Class attributes.
  - Class methods.
- Some class members will not be accessible (more on that later).
- We need an object to access instance variables.
- If we have an object (dot operator).
- If we have a pointer to an object (member of pointer operator):
- Dereference the pointer then use the dot operator.
```cpp
Account *frank_account = new Account();
(*frank_account).balance;
(*frank_account).deposit(1000.0);
```
- Or use the member of pointer operator (arrow operator).
```cpp
Account *frank_account = new Account();
frank_account->balance;
frank_account->deposit(1000.00);
```
## Coding Exercise 35
- [x] Creating and Accessing Objects
## Public and Private
- `public`, `private`, and `protected`.
- `public`
  - accessible everywhere.
- `private`
  - accessible only by members or friends of the class.
- `protected`
  - used with inheritance - we'll talk about it in the next section.
## Implementing Member Methods
- Very similar to how we implemented functions.
- Member methods have access to member attributes.
  - So you don't need to pass them as arguments!
- Can be implemented inside the class declaration.
  - Implicitly inline.
- Can be implemented outside the class declaration.
  - Need to use `Class_name::method_name`.
- Can separate specification from implementation.
  - `.h` file for the class declaration.
  - `.cpp` file for the class implementation.
- Use Include Guard to tell the compiler to process the file only once no matter how many times it is `includ`ed.
- Include Guards:
```cpp
#ifndef _CLASSNAME_H_
#define _CLASSNAME_H_
  // Class declaration stuff
#endif
```
- They are preprocessor directives.
- Many compilers also support the `pragma once` directive.
```cpp
#pragma once
  // Class declaration stuff
```
- Same thing as the include guard.
- `#include <>` - includes system header files and the compiler knows where these are located.
- `#include ""` - tells the compiler to include header files local to this project, the compiler also knows where those are.
- The way to include the `.cpp` class file and the `.h` class file in the `main.cpp` file is to include `.h` files, NEVER include `.cpp` files.
- Don't use `using` statements in class files.
- Use `.hpp` for class files.
- Use `#pragma once` over include guard.
- When returning a string literal to a function that expects a `std::string` the string literal that is `const char*` will implicitly be converted to a `std::string`.
## Coding Exercise 36
- [x] Adding public methods that access private class attributes.
## Coding Exercise 37
- [x] Add more public methods to an existing class.
## Constructors and Destructors
### Constructors
- Special member method
- Invoked during object creation.
- Useful for initialization.
- Same name as the class.
- No return type is specified.
- Can be overloaded
### Destructor
- Special member method.
- Same name as the class proceeded with a tilde (~).
- Invoked automatically when an object is destroyed.
- No return type and no parameters.
- Only 1 destructor is allowed per class - cannot be overloaded!
- Useful to release memory and other resources.
## The Default Constructor
- Does not expect any arguments.
  - Also called the no-args constructor.
- If you write no constructors at all for a class.
  - C++ will generate a Default Constructor that does nothing.
- Called when you instantiate a new object with no arguments.
## Coding Exercise 38
- [x] Add a Default Constructor to an Existing Class
## Overloading Constructors
- Classes can have as many constructors as necessary.
- Each must have a unique signature.
- Default constructor is no longer compiler-generated once another constructor is declared.
## Coding Exercise 39
- [x] Add an Overloaded Constructor to an Existing Class
## Constructor Initialization lists
- So far, all data member values have been set in the constructor body.
- Constructor initialization lists:
  - Are more efficient.
  - Initialization list immediately follows the parameter list.
  - Initializes the data members as the object is created!
  - Order of initialization is the order of declaration in the class.
## Delegating Constructors
- Often the code for constructors is very similar.
- Duplicated code can lead to errors.
- C++ allows delegating constructors:
  - Code for one constructor can call another in the initialization list.
  - Avoids duplicating code.
## Constructor Parameters and Default Values
- Can often simplify our code and reduce the number of overloaded constructors.
- Same rules apply as we learned with non-member functions.
## Copy Constructor
- When objects are copied C++ must create a new object from an existing object.
- When is a copy of and object made?
  - Passing object by value as a parameter.
  - Returning an object from a function by value.
  - Constructing one object based on another of the same class.
- C++ must have a way of accomplishing this so it provides a compiler-defined copy constructor if you don't.
- If you don't provide your own way of copying objects by value then the compiler provides a default way of copying objects.
- Copies the values of each data member to the new object
  - Default memberwise copy.
- Perfectly fine in many cases.
- Beware if you have a pointer data member:
  - Pointer will be copied.
  - Not what it is pointing to.
  - Shallow vs. Deep copy - more in the next video.
### Best practices
- Provide a copy constructor when your class has raw pointer members.
- Provide the copy constructor with a *const reference* parameter.
- Use STL classes as they already provide copy constructors.
- Avoid using raw pointer data members if possible.
## Coding Exercise 40
- [x] Add a Copy Constructor to an Existing Class
## Shallow Copying with the Copy Constructor
### Shallow vs. Deep Copying
- Consider a class that contains a pointer as a data member.
- Constructor allocates storage dynamically and initializes the pointer.
- Destructor releases the memory allocated by the constructor.
- What happens in the default copy constructor?
### Default copy constructor
- Memberwise copy.
- Each data member is copied from the source object.
- The pointer is copied NOT what it points to (shallow copy).
- *Problem*: when we release the storage in the destructor, the other object still refers to the released storage!
## Deep Copying with the Copy Constructor
- Create a *copy* of the pointed-to data.
- Each copy will have a pointer to unique storage in the heap.
- Deep copy when you have a raw pointer as a class data member.
