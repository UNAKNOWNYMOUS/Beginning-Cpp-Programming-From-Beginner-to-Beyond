---
id: section_8_notes
aliases: []
tags: []
---

# Statements and Operators
## Section Overview
## Expressions and Statements
- An expression is:
  - This most basic building block of a program.
  - "a sequence of operators and operands that specifies a computation"
  - Computes a value from a number of operands.
  - There is much, much more to expressions!!!
- A statement is:
  - A complete line of code that performs some action.
  - Usually terminated with a semi-colon.
  - Usually contain expressions.
  - C++ has many types of statements:
    - expression, null, compound, selection, iteration, declaration, jump, try blocks, and others.
## Using Operators
## The Assignment Operator
- Initialization and assignment are not the same!
- Initialization happens when the variable is declared and it gets that value for the first time.
- Assignment is when you change a value that already exists in the variable.
- l-value and r-value in C++.
- C++ is statically typed! A lot of checking happens during compile time!
## Arithmetic Operators
## Coding Exercise 7
- [x] Using the Assignment Operator
## Coding Exercise 8
- [x] Using the Arithmetic Operators
## Increment and Decrement Operators
- NEVER use it twice for the same variable in the same statement!!
  - Undefined!
## Mixed Expressions and Conversions
### Mixed Type Expressions
- Mixed type expressions happen when the operands are different types.
- C++ operations occur on same type operands.
- If operands are of different types, C++ will convert one.
- Important! Since it could affect calculation results.
- C++ will attempt to automatically convert types (coercion).
  - If it can't, a compiler error will occur.
#### Conversions
- Higher vs. Lower types are based on the size of the values the type can hold:
  - long double, double, float, unsigned long, long, unsigned int, int.
  - short and char types are always converted to int.
- Type Coercion: conversion of one operand to another data type.
- Promotion: conversion to a higher type.
- Demotion: conversion to a lower type.
### Explicit Type Casting
- Static type casting takes on the general form:
```cpp
static_cast<type>(operand);
```
## Testing for Equality
- The `==` and `!=` operators:
  - Compares the values of 2 expressions.
  - Evaluates to a Boolean (True or False, 1 or 0)
- To print the words "true" and "false" use:
```cpp
std::boolalpha;
```
- To not print the words "true" and "false" use:
```cpp
std::noboolalpha;
```
## Relational Operators
- `<=>` three-way comparison (C++20) otherwise known as the spaceship operator.
## Logical Operators
### Precedence
- not has higher precedence than and.
- and has higher precedence than or.
- not is a unary operator.
- and and or are binary operators.
### Short-Circuit Evaluation
- When evaluating a logical expression C++ stops as soon as the result is known.
## Compound Assignment Operators
## Operator Precedence
## Coding Exercise 9
- [x] Logical Operators and Operator Precedence - Can you work?
## Section Challenge
## Section Challenge - Solution
## Quiz 5
- [x] Section 08 Quiz

TODO: Look up difference between `const int` and `int const`
