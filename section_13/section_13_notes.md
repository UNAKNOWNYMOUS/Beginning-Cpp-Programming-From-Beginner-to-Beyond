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
- Example: Account - using default constructor
```cpp
class Account {
private:
  std::string name;
  double balance;
public:
  bool withdraw(double amount);
  bool deposit(double amount);
};
```
- Example: Account - user-defined no-args constructor
```cpp
class Account {
private:
  std::string name;
  double balance;
public:
  Account() {
    name = "None";
    balance = 0.0;
  }
  bool withdraw(double amount);
  bool deposit(double amount);
};
```
- Example: Account - no default constructor
```cpp
class Account {
private:
  std::string name;
  double balance;
public:
  Account(std::string name_val, double bal) {
    name = name_val;
    balance = bal;
  }
  bool withdraw(double amount);
  bool deposit(double amount);
};
```
- Once we provide a single constructor for a class, C++ will not generate a default constructor for us!
## Coding Exercise 38
- [x] Add a Default Constructor to an Existing Class
## Overloading Constructors
- Classes can have as many constructors as necessary.
- Each must have a unique signature.
- Default constructor is no longer compiler-generated once another constructor is declared.
- Example: Overloaded Constructors
```cpp
class Player {
private:
  std::string name;
  int health;
  int xp;
public:
  // Overloaded Constructors
  Player();
  Player(std::string name_val);
  Player(std::string name_val, int health_val, int xp_val);
};

// Overloaded Constructors
Player::Player() {
  name = "None";
  health = 0;
  xp = 0;
}

Player::Player(std::string name_val) {
  name = name_val;
  health = 0;
  xp = 0;
}

Player::Player(std::string name_val, int health_val, int xp_val) {
  name = name_val;
  health = health_val;
  xp = xp_val;
}
```
- Best practice is to initialize all class attributes so that there's no garbage data.
## Coding Exercise 39
- [x] Add an Overloaded Constructor to an Existing Class
## Constructor Initialization lists
- So far, all data member values have been set in the constructor body.
- Constructor initialization lists:
  - Are more efficient.
  - Initialization list immediately follows the parameter list.
  - Initializes the data members as the object is created!
  - Order of initialization is the order of declaration in the class.
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
  Player(std::string name_val);
  Player(std::string name_val, int health_val, int xp_val);
};

// Previous way:
Player::Player() {
  name = "None"; // assignment not initialization
  health = 0;
  xp = 0;
}

// Better way:
Player::Player()
  : name{"None"}, health{0}, xp{0} {
}
```
- The data members will be initialized in the order they were declared in the class.
```cpp
// Previous way:
Player::Player(std::string name_val) {
  name = name_val; // assignment not initialization
  health = 0;
  xp = 0;
}

// Better way:
Player::Player(std::string name_val)
  : name{name_val}, health{0}, xp{0} {}

// Previous way:
Player::Player(std::string name_val, int health_val, int xp_val) {
  name = name_val; // assignment not initialization
  health = health_val;
  xp = xp_val;
}

// Better way:
Player::Player(std::string name_val, int health_val, int xp_val)
  : name{name_val}, health{health_val}, xp{xp_val} {}
```
## Delegating Constructors
- Often the code for constructors is very similar.
- Duplicated code can lead to errors.
- C++ allows delegating constructors
  - Code for one constructor can call another in the initialization list.
  - Avoids duplicating code.
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
  Player(std::string name_val);
  Player(std::string name_val, int health_val, int xp_val);
};

// Delegating Constructors
Player::Player(std::string name_val, int health_val, int xp_val)
  : name{name_val}, health{health_val}, xp{xp_val} {}

Player::Player()
  : Player{"None", 0, 0} {}

Player::Player(std::string name_val)
  : Player{name_val, 0, 0} {}
```
- The `this` keyword refers pointer to the current object.
## Constructor Parameters and Default Values
- Can often simplify our code and reduce the number of overloaded constructors.
- Same rules apply as we learned with non-member functions.
- Example:
```cpp
class Player {
private:
  std::string name;
  int health;
  int xp;
public:
  // Constructor with default parameter values
  Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
};
```
## Copy Constructor
- When objects are copied C++ must create a new object from an existing object.
- When is a copy of an object made?
  - Passing object by value as a parameter.
  - Returning an object from a function by value.
  - Constructing one object based on another of the same class.
- C++ must have a way of accomplishing this so it provides a compiler-defined copy constructor if you don't.
- Example:
```cpp
Player hero {"Hero", 100, 20};

void display_player(Player p) {
  // p is a COPY of hero in this example
  // use p
  // Destructor for p will be called
}

display_player(hero);
```
- Another Example:
```cpp
Player enemy;

Player create_super_enemy() {
  Player an_enemy{"Super Enemy", 1000, 1000};
  return an_enemy; // A COPY of an_enemy is returned
}

enemy = create_super_enemy();
```
- Another Example:
```cpp
Player hero {"Hero", 100, 100};
Player another_hero {hero}; // A COPY of hero is made
```
- If you don't provide your own way of copying objects by value then the compiler provides a default way of copying objects.
- Copies the value of each data member to the new object.
  - Default memberwise copy.
- Perfectly fine in many cases.
- Beware if you have a pointer data member:
  - Pointer will be copied.
  - Not what is is pointing to.
  - Shallow vs. Deep copy - more in the next video.
### Best practices
- Provide a copy constructor when your class has raw pointer members.
- Provide the copy constructor with a `const reference` parameter.
- Use STL classes as they already provide copy constructors.
- Avoid using raw pointer data members if possible.
- Method signature of copy constructor Example:
```cpp
Type::Type(const Type &source);

Player::Player(const Player &source);

Account::Acount(const Account &source);
```
- It has to be by pass-by-reference because then we will end up with a never ending recursive calls to constructors.
- Example to implement:
```cpp
Type::Type(const Type &source) {
  // code
}

Player::Player(const Player &source)
  : name{source.name}, health{source.health}, xp{source.xp} {}

Account::Acount(const Account &source)
  : name{source.name}, balance{source.balance} {}
```
## Coding Exercise 40
- [x] Add a Copy Constructor to an Existing Class.
## Shallow Copying with the Copy Constructor
- Consider a class that contains a pointer as a data member.
- Constructor allocates storage dynamically and initializes the pointer.
- Destructor releases the memory allocated by the constructor.
- What happens in the default copy constructor?
### Default copy constructor
- Memberwise copy.
- Each data member is copied from the source object.
- The pointer is copied NOT what it points to (shallow copy).
- Problem: When we release the storage in the destructor, the other object still refers to the released storage!
- Shallow Copy Example:
```cpp
class Shallow {
private:
  int *data;
public:
  Shallow(int d);
  Shallow(const Shallow &source);
  ~Shallow();
};

Shallow::Shallow(int d) {
  data = new int;
  *data = d;
}

Shallow::~Shallow() {
  delete data;
  cout << "Destructor freeing data" << endl;
}

Shallow::Shallow(const Shallow &source)
  : data(source.data) {
  cout << "Copy constructor - shallow" << endl;
}
```
- Shallow copy - only the pointer is coped - not what it is pointing to!
- Problem: `source` and the newly created object BOTH point to the SAME `data` area!
## Deep Copying with the Copy Constructor
- Create a *copy* of the pointed-to data.
- Each copy will have a pointer to unique storage in the heap.
- Deep copy when you have a raw pointer as a class data member.
- Deep Copy Example:
```cpp
class Deep {
private:
  int *data;
public:
  Deep(int d);
  Deep(const Deep &source);
  ~Deep();
};

Deep::Deep(int d) {
  data = new int;
  *data = d;
}

Deep::~Deep() {
  delete data;
  cout << "Destructor freeing data" << endl;
}

Deep::Deep(const Deep &source) {
  data = new int;
  *data = *source.data;
  cout << "Copy constructor - deep" << endl;
}

// Delegating
Deep::Deep(const Deep &source)
  : Deep{*source.data} {
  cout << "Copy constructor - deep" << endl;
}

void display_deep(Deep s) {
  cout << s.get_data_value() << endl;
}
```
- When `s` goes out of scope the destructor is called and releases `data`.
- No Problem: since the storage being released is unique to `s`.
## Move Constructors

