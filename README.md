# Null Pointer Dereference Bug in C++

This repository demonstrates a common error in C++: dereferencing a null pointer.  Attempting to access the memory location pointed to by a null pointer results in undefined behavior, typically leading to a program crash.

## Bug Description

The `bug.cpp` file contains a simple C++ program that initializes an integer pointer (`ptr`) to `nullptr`. The program then attempts to dereference this null pointer by assigning the value 10 to the memory location it points to. This action causes a segmentation fault.

## Solution

The `bugSolution.cpp` file provides a corrected version of the code.  It includes a check to ensure the pointer is not null before dereferencing it, preventing the segmentation fault.  Error handling is crucial to create robust and stable applications.

## How to Reproduce

1. Clone this repository.
2. Compile `bug.cpp` using a C++ compiler (e.g., g++): `g++ bug.cpp -o bug`
3. Run the executable: `./bug` (This will likely result in a segmentation fault)
4. Compile `bugSolution.cpp`: `g++ bugSolution.cpp -o bugSolution`
5. Run the corrected executable: `./bugSolution` (This will execute without crashing)
