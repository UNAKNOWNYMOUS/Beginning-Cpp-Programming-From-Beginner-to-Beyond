---
id: section_11_notes
aliases: []
tags: []
---

# Functions
## Section Overview
- Functions allow us to divide our programs into modular units of executable code that we can call and reuse these units as we wish.
## What is a Function?
- C++ programs:
  - C++ Standard Libraries (functions and classes).
  - Third-party libraries (functions and classes).
  - Our own functions and classes.
- Functions allow the modularization of a program.
  - Separate code into logical self-contained units.
  - These units can be reused.
## Coding Exercise 22
- [x] Using Functions from the cmath Library
## Function Definition
### Defining Functions
- name
  - the name of the function.
  - same rules as for variables.
  - should be meaningful.
  - usually a verb or verb phrase.
- parameter list
  - the variables passed into the function.
  - their types must be specified.
- return type
  - the type of the data that is returned from the function.
- body
  - the statements that are executed when the function is called.
  - in curly braces {}.
### Calling functions
- Functions can call other functions.
- Compiler must know the function details BEFORE it is called!
## Function Prototypes
- The compiler must 'know' about a function before it is used.
- Define functions before calling them.
  - OK for small programs.
  - Not a practical solution for larger programs.
- Use function prototypes.
  - Tells the compiler what it needs to know without a full function definition.
  - Also called forward declarations.
  - Placed at the beginning of the program.
  - Also used in our header files (.h) - more about this later.
## Function Parameters and the return Statement
- When we call a function we can pass in data to that function.
- In the function call they are called arguments.
- In the function definition they are called parameters.
- They must match in number, order, and in type.
