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
- Example of inside the class declaration:
```cpp
class Account {
private:
  double balance;
public:
  void set_balance(double bal) {
    balance = bal;
  }
  double get_balance() {
    return balance;
  }
};
```
- Example of outside the class declaration:
```cpp
class Account {
private:
  double balance;
public:
  void set_balance(double bal);
  double get_balance();
};

void Account::set_balance(double bal) {
  balance = bal;
}

double Account::get_balance() {
  return balance;
}
```
### Separating Specification from Implementation
```cpp
/* Account.h */
class Account {
private:
  double balance;
public:
  void set_balance(double bal);
  double get_balance();
};
```
- Include Guard to stop processing same file more than once:
```cpp
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
  // Account class declaration
#endif
```
- Pragma once directive in place of the include guard:
```cpp
#pragma once
  // Account class declaration
```
- Implementation for Account class:
```cpp
/* Account.cpp */
#include "Account.h"

void Account::set_balance(double bal) {
  balance = bal;
}

double Account::get_balance() {
  return balance;
}
```
- Always include `.h` files, never include `.cpp` files.
## Coding Exercise 36
- [x] Adding public methods that access private class attributes.
## Coding Exercise 37
- [x] Add more public methods to an existing class.
## Constructors and Destructors
### Constructors
- Special member method.
- Invoked during object creation.
- Useful for initialization.
- Same name as the class.
- No return type is specified.
- Can be overloaded.
- Example:
```cpp
class Player {
private:
  std::string name;
  int health;
  int xp;
public:
  // Overloaded Constructors
  Player();
  Player(std::string name);
  Player(std::string name, int health, int xp);
};
```
- Another Example:
```cpp
class Account {
private:
  std::string name;
  double balance;
public:
  // Constructors
  Account();
  Account(std::string name, double balance);
  Account(std::string name);
  Account(double balance);
};
```
### Destructors
- Special member method.
- Same name as the class proceeded with a tilde (~).
- Invoked automatically when an object is destroyed.
- No return type and no parameters.
- Only 1 destructor is allowed per class - cannot be overloaded!
- Useful to release memory and other resources.
- Example:
```cpp
class Player {
private:
  std::string name;
  int health;
  int xp;
public:
  Player();
  Player(std::string name);
  Player(std::string name, int health, int xp);
  // Destructor
  ~Player();
};
```
- Another example:
```cpp
class Account {
private:
  std::string name;
  double balance;
public:
  Account();
  Account(std::string name, double balance);
  Account(std::string name);
  Account(double balance);
  // Destructor
  ~Account();
};
```
- If you don't provide a constructor and destructor, C++ will generate one for you but they are empty!
## The Default Constructor
- Does not expect any arguments.
  - Also called the no-args constructor.
- If you write no constructors at all for a class:
  - C++ will generate a Default Constructor that does nothing.
- Called when you instantiate a new object with no arguments.
