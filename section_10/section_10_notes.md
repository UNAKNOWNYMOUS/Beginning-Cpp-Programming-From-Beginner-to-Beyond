---
id: section_10_notes
aliases: []
tags: []
---

# Characters and Strings
## Section Overview
- Use C++ strings for modern C++.
- Methods are functions that work with objects.
## Character Functions
- Character functions:
```cpp
#include <cctype>

function_name(char)

// Functions for testing characters
// Functions for converting character case
```
## C-Style Strings
- C-Style strings are:
  - Sequence of characters.
  - Contiguous in memory.
  - Implemented as an array of characters.
  - Terminated by a null character (null).
    - null - character with a value of zero.
  - Referred to as zero or null terminated strings.
- String literal:
  - Sequence of characters in double quotes.
  - Constant.
  Terminated with null character.
- Array names and literals evaluate to their location in memory.
## Working with C-style Strings
## Coding Exercise 19
- [x] Using C-style Strings
## C++ Strings
- `std::string` is a Class in the Standard Template Library.
  - `#include <string>`
  - std namespace
  - contiguous in memory.
  - dynamic size.
  - work with input and output streams.
  - lots of useful member functions.
  - our familiar operators can be used (+, =, <, <=, >, >= +=, ==, !=, []...)
  - can be easily converted to C-style Strings if needed.
  - safer.
- Unlike C-style strings, C++ style strings are ALWAYS initialized.
## Working with C++ Strings
## Coding Exercise 20
- [x] Using C++ Strings - Exercise 1
## Coding Exercise 21
- [x] Using C++ Strings - Exercise 2
## Section Challenge
## Selection Challenge - Solution
## Quiz 7
- [ ] Section 10 Quiz
## Assignment 1
- [ ] Challenge Assignment - Letter Pyramid
