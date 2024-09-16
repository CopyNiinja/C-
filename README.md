# Array Class Implementation in C++

This project provides a template-based `Array` class in C++, offering various functionalities to manage and manipulate arrays of different data types (e.g., `int`, `char`, `double`). It includes common array operations such as adding elements, inserting elements, deleting elements, finding the maximum and minimum values, reversing, and more.

## Table of Contents
- [Features](#features)
- [Requirements](#requirements)
- [Usage](#usage)
- [Code Structure](#code-structure)
- [How to Compile and Run](#how-to-compile-and-run)
- [Example](#example)
- [Known Issues](#known-issues)
- [Contributing](#contributing)
- [License](#license)

## Features
- **Template-based:** Supports arrays of various data types.
- **Array operations:** Add, insert, delete, search, get, set, find max/min values, and display the array.
- **Dynamic handling:** Keeps track of maximum and minimum values as elements are added, inserted, or modified.

## Requirements
- A C++ compiler that supports C++11 or later (e.g., `g++`).
- Basic understanding of compiling C++ programs via command line.

## Usage
The `Array` class is a template that allows you to create arrays of any data type:
- Supports initialization of arrays with a fixed size.
- Includes methods to manipulate array data, including:
  - `Add(T x)`: Adds an element to the end of the array.
  - `Insert(int index, T x)`: Inserts an element at the specified index.
  - `Delete(int index)`: Deletes an element at the specified index.
  - `Search(T x)`: Searches for an element and returns its index.
  - `Get(int index)`: Retrieves the element at the specified index.
  - `Set(int index, T x)`: Updates the element at the specified index.
  - `Max()`: Returns the maximum element in the array.
  - `Min()`: Returns the minimum element in the array.
  - `Display()`: Prints the current elements of the array.

## Code Structure
- **Header and Implementation**: The class template `Array` is fully implemented within a single `.cpp` file.
- **Methods**: Covers typical array operations such as insertion, deletion, search, and more.

## How to Compile and Run
1. **Clone the repository**:
    ```bash
    git clone https://github.com/copyniinja/C-.git
    ```
2. **Navigate to the directory**:
    ```bash
    cd C-
    ```
3. **Compile the code**:
    ```bash
    g++ -o Array_Class_Template.cpp.cpp
    ```
4. **Run the program**:
    ```bash

    ```

## Example
### Sample Code
Here's an example of how to use the `Array` class in your `main()` function:
```cpp
int main() {
    int n;
    std::cin >> n;

    Array<int> a(n);
    Array<char> b(n);
    Array<double> d(n);

    b.Display();

    a.Add(12);
    a.Insert(5, 6);
    a.Delete(6);
    std::cout << a.Search(10) << std::endl;
    std::cout << a.Get(0) << std::endl;
    a.Set(0, 100);
    std::cout << a.Max() << " " << a.Min() << std::endl;

    return 0;
}
