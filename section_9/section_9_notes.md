---
id: section_9_notes
aliases: []
tags: []
---

# Controlling Program Flow
## Section Overview
- With sequence, selection, and iteration we can implement ANY algorithm.
## if Statement
- The if statement takes the general form:
```cpp
if (expr)
  statement;
// or
if (expr) {
  statements;
}
```
## Coding Exercise 10
- [x] If Statement - Can you Drive?
## if else Statement
- The if else statement takes the general form:
```cpp
if (expr)
  statement1;
else
  statement2;
// or
if (expr) {
  statements1;
} else {
  statements2;
}
```
- The if else if construct takes the general form:
```cpp
if (expr)
  statement;
else if (expr)
  statement;
else
  statement;
// or
if (expr) {
  statements;
} else if (expr) {
  statements;
} else {
  statements;
}
```
## Coding Exercise 11
- [x] If-Else Statement - Can you Drive?
## Nested if Statements
- Nested if statements take on the general form:
```cpp
if (expr1)
  if (expr2)
    statement1;
  else
    statement2;
// or
if (expr1) {
  if (expr2) {
    statement1;
  } else {
    statement2;
  }
}
```
## Coding Exercise 12
- [x] Nested if Statements - Can you Drive?
## switch-case Statement
- The switch statement takes on the general form:
```cpp
switch (integer_control_expr) {
  case expression_1: statement_1; break;
  case expression_2: statement_2; break;
  case expression_3: statement_3; break;
  ...
  case expression_n: statement_n; break;
  default: statement_default;
}
```
- `default` case is optional BUT it is best practice to include it.
- The switch statement is often used with enumeration types.
- The control expression must evaluate to an integer type.
- The case expressions must be constant expressions that evaluate to integer or integers literals.
- Once a match occurs all following case sections are executed UNTIL a `break` is reached the switch complete.
- Best practice - provide break statement for each case.
- Best practice - `default` is optional, but should be handled.
- Once you declare a variable in a switch statement you need `{}`.
- Need to handle all cases for enums or use a default case.
## Coding Exercise 13
- [x] Switch Statement - Day of the Week
## Conditional Operator
- Conditional operator takes on the general form:
```cpp
(cond_expr) ? expr1 : expr2;
```
- The conditional operator is a ternary operator which means it operates on 3 operands.
## Looping
- Iteration or repetition.
- Allows the execution of a statement or block of statements repeatedly.
- Loops are made up a loop condition and the body which contains the statements to repeat.
- `for` loop
  - iterate a specific number of times.
- `Range-based for` loop
  - one iteration for each element in a range or collection.
- `while` loop
  - iterate while a condition remains true.
  - stop when the condition becomes false.
  - check the condition at the beginning of every iteration.
- `do-while` loop
  - iterate while a condition remains true.
  - stop when the condition becomes false.
  - check the condition at the end of every iteration.
## for Loop
- The `for` loop takes on the general form:
```cpp
for (initialization; condition; increment)
  statement;
// or
for (initialization; condition; increment) {
  statements;
}
```
- `,` is the comma operator.
- The comma operator allows you to separate expressions with a comma and both expressions will execute.
  - The associativity right-to-left and the result of the comma operator is the left-most expression.
- All for loop expressions are optional:
  - no initialization
  - no test
  - no increment
## Coding Exercise 14
- [x] For loop - Sum of Odd Integers
## range-based for Loop
- The range-based for loop was introduced in C++11, and takes on the general form:
```cpp
for (var_type var_name : sequence)
  statement; // can use var_name
// or
for (var_type var _name : sequence) {
  statements; // can use var_name
}
```
- We don't have to specifically give the type of the loop variable we can use `auto`.
- The `auto` key word tells the C++ compiler to deduce the type itself.
  - In other words, you are telling the C++ compiler to figure out the type based on the declarations.
## Coding Exercise 15
- [x] Using the range-based for loop
## while Loop
- The while loop takes on the general form:
```cpp
while (expression)
  statement;
// or
while (expression) {
  statements;
}
```
## Coding Exercise 16
- [x] While loop exercise
## do while Loop
- The do while loop takes on the general form:
```cpp
do {
  statements;
} while (expression);
```
- Variables inside the loop condition for a do-while loop need to be declared outside the loop.
## Coding Exercise 17
- [x] Do-while loop exercise
## continue and break
- `continue`
  - no further statements in the body of the loop are executed.
  - control immediately goes directly to the beginning of the loop for the next iteration.
  - the condition is tested again.
- `break`
  - no further statements in the body of the loop are executed.
  - loop is immediately terminated.
  - control immediately goes to the statement following the loop construct.
## Infinite Loops
- Loops whose condition expression always evaluate to true.
- Usually this is unintended and a programmer error.
- Sometimes programmers use infinite loops and include and break statements in the body to control them
- Sometimes infinite loops are exactly what we need:
  - Even loop in an event-driven program.
  - Operating system.
## Nested Loops
- Loop nested within another loop.
- Can be as many levels deep as the program needs.
- Very useful with multi-dimensional data structures.
- Outer loop vs. Inner loop.
## Coding Exercise 18
- [x] Nested Loops - Sum of the Product of all Pairs of Vector Elements
## Section Challenge
## Section Challenge - Solution Part 1
## Section Challenge - Solution Part 2
## Quiz 6
- [x] Section 09 Quiz
