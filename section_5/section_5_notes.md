---
id: section_5_notes
aliases: []
tags: []
---

# Structure of a C++ Program
## Section Overview
## Overview of the Structure of a C++ Program
- Keywords are reserved names given by the C++ programming language.
- Identifiers are names given by the programmer.
## 'include' Preprocessor Directive
- The C++ preprocessor processes your program before the C++ compiler sees it.
  - It removes comments.
  - It looks for preprocessor directives - it processes them and removes them.
- The C++ preprocessor does not understand C++.
  - It just gets the preprocessor directives and gets the source code ready for the compiler.
## Comments
- Comments are programmer readable explanations in the source code.
- Comments are never seen by the compiler.
## The `main()` function
- Every C++ program must have exactly 1 `main()` function.
## Namespaces
- C++ allows developers to use namespaces as containers to group their code entities into a namespace scope.
- A *namespace* in C++, is a declarative region that provides a scope to the identifiers (names of types, functions, variables, etc.) inside it. Its primary purpose is to group related code and prevent *name collisions*.
- `::` is known as the scope resolution operator.
- `using namespace std;` is bad practice.
  - Recommended Alternatives are:
    - Fully qualified names
    - Specific `using` declarations
    - Scoped `using` directives
## Basic Input and Output (I/O) using cin and cout
- `cin` is, by default, connected to the keyboard.
## Coding Exercise 1
- [x] Using cout and the insertion operator to say Hi to Frank
## Coding Exercise 2
- [x] Using cout and the insertion operator
## Coding Exercise 3
- [x] Using cin and the extraction operator
## Quiz 2
- [x] Section 5 Quiz
