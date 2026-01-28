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
### Pass-by-value
- When you pass data into a function it is passed-by-value.
- A copy of the data is passed to the function.
- Whatever changes you make to the parameter in the function does NOT affect the argument that was passed in.
- Formal vs. Actual parameters
  - Formal parameters (Formal arguments) - the parameters defined in the function header.
  - Actual parameters (Actual Arguments) - the parameter used in the function call, the arguments.
### Function Return Statement
- If a function returns a value then it must use a `return` statement that returns a value.
- If a function does not return a value (void) then the `return` statement is optional.
- `return` statement can occur anywhere in the body of the function.
- `return` statement immediately exits the function.
- We can have multiple `return` statements in a function.
  - Avoid many return statements in a function.
    - Just like break statements.
- The return value is the result of the function call.
## Coding Exercise 23
- [x] Functions and Prototypes - Converting Temperatures.
## Default Argument Values
- When a function is called, all arguments must be supplied.
- Sometimes some of the arguments have the same values most of the time.
- We can tell the compiler to use default values if the arguments are not supplied.
- Default values can be in the prototypes or definition, not both.
  - Best practice - in the prototype.
  - Must appear at the tail end of the parameter list.
- Can have multiple default values.
  - must appear consecutively at the tail end of the parameter list.
## Coding Exercise 24
- [x] Using Default Argument Values - Grocery List
## Overloading Functions
- We can have functions that have different parameter lists that have the same name.
- Abstraction mechanism since we can just think `print` for example.
- A type of polymorphism.
  - We can have the same name work with different data types to execute similar behavior.
- The compiler must be able to tell the functions apart based on the parameter lists and argument supplied.
- Return type doesn't matter, the parameters do!
- Be mindful when using default parameters with overloaded functions.
## Coding Exercise 25
- [x] Overloading Functions - Calculating Area
## Passing Arrays to Functions
- We can pass an array to a function by providing square brackets in the formal parameter description.
```cpp
void print_array(int numbers []);
```
- The array elements are NOT copied.
- Since the array name evaluates to the location of the array in memory - this address is what is copied.
- So the function has no idea how many elements are in the array since all it knows is the location of the first element (the name of the array).
- Should also pass in size of the array to functions
- Functions can modify the actual array!
### const parameters
- We can tell the compiler that function parameters are const (read-only).
- This could be useful in the print_array function since it should NOT modify the array.
## Coding Exercise 26
- [x] Passing Arrays to Functions - Print a Guest List
## Pass by Reference
- Sometimes we want to be able to change the actual parameter from within the function body.
- In order to achieve this we need the location or address of the actual parameter.
- We saw how this is the effect with the array, but what about other variable types?
- We can use reference parameters to tell the compiler to pass in a reference to the actual parameter.
- The formal parameter will now be an alias for the actual parameter.
## Coding Exercise 27
- [x] Using Pass by Reference - Print a Guest List
## Scope Rules
- C++ uses scope rules to determine where an identifier can be used.
- C++ uses static or lexical scoping.
- Local or Block scope.
- Global scope.
- Identifiers declared in a block {}.
- Function parameters have block scope.
- Only visible within the block {} where declared.
- Function local variables are only active while the function is executing.
- Local variables are NOT preserved between function calls.
- With nested blocks inner blocks can 'see' but outer blocks cannot 'see' in.
### Static local variables
- Declared with static qualifier.
```cpp
static int value {10};
```
- Value IS preserved between function calls.
- Only initialized the first time the function is called.
### Global Scope
- Identifier declared outside any function or class.
- Visible to all parts of the program after the global identifier has been declared.
- Global constants are OK.
- Best practice - don't use global variables.
## How do Function Calls Work?
- Functions use the 'function call stack'
  - Analogous to a stack of books.
  - LIFO = Last In First Out.
  - push and pop.
- Stack Frame or Activation Record
  - Functions must return control to function that called it.
  - Each time a function is called we create a new activation record and push it on the stack.
  - When a function terminates we pop the activation record and return.
  - Local variables and function parameters are allocated on the stack.
- Stack size is finite - Stack Overflow.
## inline Functions
- Function calls have a certain amount of overhead.
- You saw what happens on the call stack.
- Sometimes we have simple functions.
- We can *suggest* to the compiler to compile them 'inline':
  - avoid function call overhead.
  - generate inline assembly code.
  - faster.
  - could cause code bloat.
- Compiler optimizations are very sophisticated.
  - will likely inline even without your suggestion.
- Inline functions take on the general form:
```cpp
inline int add_numbers(int a, int b) {
  return a + b;
}
```
## Recursive Functions
- A recursive function is a function that calls itself.
  - Either directly or indirectly through another function.
- Recursive problem solving.
  - Base case.
  - Divide the rest of the problem into subproblem and do recursive call.
- There are many problems that lend themselves to recursive solutions
- Mathematic - factorial, Fibonacci, fractals,...
- Searching and sorting - binary search, search trees,...
### Important notes
- If recursion doesn't eventually stop you will have infinite recursion.
- Recursion can be resource intensive.
- Remember the base cases(s)
  - It terminates the recursion.
- Only use recursive solutions when it makes sense.
- Anything that can be done recursively can be done iteratively.
  - Stack overflow error.
## Coding Exercise 28
- [x] Implementing a Recursive Function - Sum of Digits
## Coding Exercise 29
- [x] Implementing a Recursive Function - Save a Penny
## Section Challenge
## Section Challenge-Solution
## Quiz 8
- [x] Section 11 Quiz
