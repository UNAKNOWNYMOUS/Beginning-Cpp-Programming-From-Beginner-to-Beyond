---
id: section_13_notes
aliases: []
tags: []
---

# OOP - Classes and Objects
## Section Overview
## What is Object-Oriented Programming?
- Procedural Programming.
- Procedural Programming limitations.
- OO Programming concepts and their advantages.
- OO Programming limitations.
### Procedural programming
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
### What is Object-Oriented Programming?
- Classes and Objects:
  - Focus is on classes that model real-world domain entities.
  - Allows developers to think at a higher level of abstraction.
  - Used successfully in very large programs.
- Encapsulation:
  - Objects contain data AND operations that work on that data.
  - Abstract Data Type (ADT).
- Information-hiding:
  - Implementation-specific logic can be hidden.
  - Users of the class code to the interface since they don't need to know the implementation.
  - More abstraction.
  - Easier to test, debug, maintain, and extend.
- Reusability:
  - Easier to reuse classes in other applications.
  - Faster development.
  - Higher quality.
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
  - Usually more up-font design is necessary to create good models and hierarchies.
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
- Example classes:
  - Account
  - Employee
  - Image
  - std::vector
  - std::string
- Objects:
  - Created from a class.
  - Represents a specific instance of a class.
  - Can create many, many objects.
  - Each has its own identity.
  - Each can use the defined class methods.
- Example Account objects:
  - Frank's account is an instance of an Account.
  - Jim's account is an instance of an Account.
  - Each has its own balance, can make deposits, withdrawals, etc.
## Declaring a Class and Creating Objects
- A class takes the general form:
```cpp
class Class_Name {
  /* declarations; */
};
```
- Best practice to capitalize class names for user-defined classes.
- Example:
```cpp
class Player {
  // attributes
  std::string name;
  int health;
  int xp;

  // methods
  void talk(std::string text_to_say);
  bool is_dead();
};

// Creating objects
Player frank;
Player hero;

Player *enemy = new Player();
delete enemy;
```
- Another example:
```cpp
class Account {
  // attributes
  std::string name;
  double balance;

  // methods
  bool withdraw(double amount);
  bool deposit(double amount);
};

// Creating objects
Account frank_account;
Account jim_account;

Account *mary_account = new Account();
delete mary_account;
```
## Accessing Class Members
- We can access:
  - Class attributes.
  - Class methods.
- Some class members will not be accessible (more on that later).
- We need an object to access instance variables.
- If we have an object (dot operator).
- Using the dot operator:
```cpp
Account frank_account;

frank_account.balance;
frank_account.deposit(1000.00);
```
- If we have a pointer to an object (member of pointer operator).
- Dereference the pointer then use the dot operator.
```cpp
Account *frank_account = new Account();

(*frank_account).balance;
(*frank_account).deposit(1000.00);

// Or use the member of pointer operator (arrow operator)
Account *frank_account = new Account();

frank_account->balance;
frank_account->deposit(1000.00);
```
- By default, all information in a C++ class is private.
## Coding Exercise 35
- [x] Creating and Accessing Objects
## public and private
### Class Member Access Modifiers
- `public`, `private`, and `protected`
- `public`:
  - Accessible everywhere.
- `private`:
  - Accessible only by members or friends of the class.
- `protected`:
  - Used with inheritance - we'll talk about it in the next section.
- `public` example:
```cpp
class Class_Name {
public:
  // declarations;
};
```
- `private` example:
```cpp
class Class_Name {
private:
  // declarations;
};
```
- `protected` example:
```cpp
class Class_Name {
protected:
  // declarations;
};
```
- Example in a class:
```cpp
class Player {
private:
  std::string name;
  int health;
  int xp;
public:
  void talk(std::string text_to_say);
  bool is_dead();
};
```
