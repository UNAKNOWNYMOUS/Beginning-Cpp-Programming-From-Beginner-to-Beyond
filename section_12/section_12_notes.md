---
id: section_12_notes
aliases: []
tags: []
---

# Pointers and References
## Section Overview
## What is a Pointer?
- A variable
  - whose value is an address
- What can be at that address?
  - Another variable
  - A function
- Pointers point to variables or functions
- If x is an integer variable and its value is 10 then I can declare a pointer that points to it.
- To use the data that the pointer is pointing to you must know its type.
### Why use Pointers?
- Can't I just use the variable or function itself?
  - Yes, but not always
- Inside functions, pointers can be used to access data that are defined outside the function. Those variables may not be in scope so you can't access them by their name.
- Pointers can be used to operate on arrays very efficiently.
- We can allocate memory dynamically on the heap or free store.
  - This memory doesn't even have a variable name.
  - The only way to get to it is via a pointer.
- With OO. pointers are how polymorphism works!
- Can access specific addresses in memory.
  - useful in embedded and systems applications.
## Declaring Pointers
- Declaring pointers takes on the general form:
```cpp
variable_type *pointer_name;
```
- Initializing pointers takes on the general form:
```cpp
variable_type *pointer_name {nullptr};
```
- Initializing pointer variables to 'point nowhere'.
- Always initialize pointers!
- Uninitialized pointers contain garbage data and can 'point anywhere'.
- Initializing to zero or `nullptr` (C++11) represents address zero.
  - implies that the pointer is 'pointing nowhere'.
- If you don't initialize a pointer to point to a variable or function then you should initialize it to `nullptr` to 'make it null'.
## Accessing the Pointer Address and Storing Address in a Pointer
- `&` the address operator
- Variables are stored in unique addresses.
- Unary operator.
- Evaluates to the address of its operand.
  - Operand cannot be a constant or expressions that evaluates to temp values.
- Don't confuse the size of a pointer and the size of what it points to.
- All pointers in a program have the same size.
- They may be pointing to very large or very small types.
### Typed pointers
- The compiler will make sure that the address stored in a pointer variable is of the correct type.

- Pointers are variables so they can change.
- Pointers can be null.
- Pointers can be uninitialized.
## Dereferencing a Pointer
- Access the data we're pointing to - dereferencing a pointer
- If `score_ptr` is a pointer and has a valid address.
- Then you can access the data at the address contained in the `score_ptr` using the dereferencing operator `*`.
## Dynamic Memory Allocation
- Allocating storage from the heap at runtime
- We often don't know how much storage we need until we need it.
- We can allocate storage for a variable at run time.
- Recall C++ arrays
  - We had to explicitly provide the size and it was fixed.
  - But vectors grow and shrink dynamically.
- We can use pointers to access newly allocated heap storage.
- Using `new` to allocate storage.
- Using `delete` to deallocate storage.
- Using `new[]` to allocate storage for an array.
- Using `delete[]` to deallocate storage for an array.
## The Relationship Between Arrays and Pointers
- The value of an array name is the address of the first element in the array.
- The value of a pointer variable is an address.
- If the pointer points to the same data type as the array element then the pointer and array name can be used interchangeably (almost).
```cpp
int array_name[] {1, 2, 3, 4, 5};
int *pointer_name {array_name};
/* Subscript Notation   |   Offset Notation
   ------------------------------------------------
   array_name[index]    |   *(array_name + index)
   pointer_name[index]  |   *(pointer_name + index)
*/
```
## Pointer Arithmetic
- Pointers can be used in:
  - Assignment expressions.
  - Arithmetic expressions.
  - Comparison expressions.
- C++ allows pointer arithmetic.
- Pointer arithmetic only makes sense with raw arrays.
- `++` increments a pointer to point to the next array element.
- `--` decrements a pointer to point to the previous array element.
- `+` increment pointer by `n * sizeof(type)`.
- `-` decrement pointer by `n * sizeof(type)`.
### Subtracting two pointers
- Determine the number of elements between the pointers.
- Both pointers must point to the same data type.
### Comparing two pointers == and !=
- Determine if two pointers point to the same location.
  - does NOT compare the data where they point!
### Comparing the data pointers point to
- Determine if two pointers point to the same data.
  - you must compare the referenced pointers.
## Coding Exercise 30
- [x] Swap Values using Pointers
  - Note can add numbers together instead of using a temp variable.
## Const and Pointers
- `const` and Pointers
- There are several ways to qualify pointers using `const`:
  - Pointers to constants
  - Constant pointers
  - Constant pointers to constants
### Pointers to constants
- The data pointed to by the pointers is constant and *cannot* be changed.
- The pointer itself can change and point somewhere else.
```cpp
const int *score_ptr { &high_score };
```
### Constant pointers
- The data pointed to by the pointers can be changed.
- The pointer itself *cannot* change and point somewhere else.
```cpp
int *const score_ptr { &high_score };
```
### Constant pointers to constants
- The data pointed to by the pointer is constant and *cannot* be changed.
- The pointer itself *cannot* change and point somewhere else.
```cpp
const int *const score_ptr { &high_score };
```
## Passing Pointers to Functions
- Pass-by-reference with pointer parameters.
- We can use pointers and the dereference operator to achieve pass-by-reference.
- The function parameter is a pointer.
- The actual parameter can be a pointer or address of a variable.
## Returning a Pointer from a Function
- Functions can also return pointers
```cpp
type *function();
```
- Should return pointers to
  - Memory dynamically allocated in the function.
  - To data that was passed in.
- Never return a pointer to a local function variable!
## Coding Exercise 31
- [x] Passing a Pointer to a Function
## Coding Exercise 32
- [x] Find the Maximum Element in an Array using Pointers
## Coding Exercise 33
- [x] Reverse an Array using Pointers (Challenging!)
## Coding Exercise 34
- [x] Reverse a std::string using Pointers (Challenging!)
## Potential Pointer Pitfalls
- Uninitialized pointers.
- Dangling Pointers.
- Not checking if new failed to allocate memory.
- Leaking memory.
### Dangling pointer
- Pointer that is pointing to released memory.
  - For example, 2 pointers point to the same data.
  - 1 pointer releases the data with delete.
  - The other pointer accesses the release data.
- Pointer that points to memory that is invalid.
  - We saw this when we returned a pointer to a function local variable.
### Not checking if new failed
- If `new` fails an exception is thrown.
- We can use exception handling to catch exceptions.
- Dereferencing a null pointer will cause your program to crash.
### Leaking memory
- Forgetting to release allocated memory with delete.
- If you lose your pointer to the storage allocated on the heap you have no way to get to that storage again.
- The memory is orphaned or leaked.
- One of the most common pointer problems.
## What is a Reference?
- An alias for a variable.
- Must be initialized to a variable when declared.
- Cannot be null.
- Once initialized cannot be made to refer to a different variable.
- Very useful as function parameters.
- Might be helpful to think of a reference as a constant pointer that is automatically dereferenced.
## L-values and R-values
## Using the CodeLite IDE Debugger
## Section Recap
## Section Challenge
## Section Challenge - Solution
## Quiz 9
- [ ] Section 12 Quiz
