---
id: section_7_notes
aliases: []
tags: []
---

# Arrays and Vectors
## Section Overview
- A compound type is made up of other types.
## What is an Array?
- All elements of an array must be of the same type.
- Each element can be accessed directly.
- Arrays are fixed in size. Size cannot change.
- Arrays are stored internally, contiguously in memory.
## Declaring and Initializing Arrays
- Array declaration takes on the general form:
```cpp
Element_Type array_name [constant number of elements];
```
```
```
- Array initialization takes on the general form:
```cpp
Element_Type array_name [number of elements] {init list};
```
## Accessing and Modifying Array Elements
- The name of the array represents the location of the first element in the array (index 0).
- The `[index]` represents the offset from the beginning of the array.
- C++ simply performs a calculation to find the correct element.
- No bounds checking!
## Coding Exercise 5
- [x] Declaring, Initializing, and Accessing an Array
## Multidimensional Arrays
- Multi-dimensional array declaration takes on the general form:
```cpp
Element_Type array_name [dim1_size] [dim2_size];
```
## Declaring and Initializing Vectors
- The general form for declaring a vector is as follows:
```cpp
#include <vector>
using namespace std;

vector <char> vowels;
vector <int> test_scores;

vector <char> vowels (5);
vector <int> test_scores (10);
```
- We can initialize vectors using the list initializer:
```cpp
vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
vector <int> test_scores {100, 98, 89, 85, 93};
vector <double> hi_temperatures (365, 80.0);
```
- Vectors are dynamic in size.
- Elements are all the same type.
- Stored contiguously in memory.
- Individual elements can be accessed by their position or index.
- When you declare a vector the elements will be initialized to 0.
