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
