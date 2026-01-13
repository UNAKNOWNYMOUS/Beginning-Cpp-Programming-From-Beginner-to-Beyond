---
id: section_6_notes
aliases: []
tags: []
---

# Variables and Constants
## Section Overview
## What is a variable?
- Random Access Memory (RAM) is a contiguous block of storage used by the computer to store information.
- Most programming languages allow us to associate a name with a memory location.
- A variable is an abstraction for a memory location.
- Variables have:
  - Type - their category
  - Value - the contents
- Variables *must* be declared before they are used.
- A variables value may change.
## Declaring and Initializing Variables
- Variable declarations general form:
```cpp
VariableType VariableName;
```
### Naming Variables
- Can contain letters, numbers, and underscores.
- Must begin with a letter or underscore (_).
  - cannot begin with a number.
- Cannot use C++ reserved keywords.
- Cannot redeclare a name in the same scope.
  - remember that C++ is case sensitive.
### Naming Variables - Style and Best Practices
- Be consistent with your naming conventions.
- Use meaningful names.
- Never use variables before initializing them.
- Declare variables close to when you need them in your code.
- Initializing variables take the general form:
```cpp
int age; // uninitialized

int age = 21; // C-like initialization
int age (21); // Constructor initialization
int age {21}; // C++11 list initialization syntax
```
## Coding Exercise 4
- [x] Declaring and Initializing Variables
## Global Variables
- Global variables are outside of any functions and they can be accessed by any part of the program.
- Unlike local variables, global variables are initialized to 0.
## C++ Built-in Primitive Types
- C++ primitive data types/fundamental data types are implemented directly by the C++ language.
- C++ primitive data types are often dependent on the platform + compiler that we're working on.
  - `#include <climits>` contains this information.
- C++'s list initialization is good for catching errors of overflows in types during compile time.
## What is the Size of a Variable (sizeof)
- `climits` for integral types and `cfloat` for floating point types.
## What is a Constant?
- Constants are like variables, however their value cannot change once declared!
### Types of constants in C++
- Literal constants
- Declared constants
  - `const` keyword
- Constant expressions
  - `constexpr` keyword
- Enumerated constants
  - `enum` keyword
- Defined constants
  - `#define`
- Character Literal Constants (escape codes/escape sequence)
- Don't use defined constants in Modern C++!
## Declaring and Using Constants
- Pseudocode is an English-like/natural language-like representation of an Algorithm or steps required to solve a problem.
- Refactoring means making your code better without changing behavior.
## Section Challenge
## Section Challenge - Solution
## Quiz 3
- [x] Section 06 Quiz
