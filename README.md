# DynamicArray

DynamicArray is a simple implementation of a dynamic array in C++.

## Features

- Create an empty dynamic array
- Get the size and capacity of the array
- Check if the array is empty
- Reserve a specific capacity for the array
- Access elements at a given index
- Add an element to the end of the array
- Insert an element at a specified position

## Usage

To use the DynamicArray code, follow these steps:

1. Include the "DynamicArray.h" header file in your C++ program:

   ```cpp
   #include "DynamicArray.h"
   ```
   
2. Create a `DynamicArray` object:
    ```c++
        DynamicArray array;
    ```
3. Start using the dynamic array functions. For example, you can add elements to the array using `push_back()`:
    ```c++
    push_back(10);
    push_back(20);
    ```
   You can also insert an element at a specific position using `insert()`:
    ```c++
    insert(1, 15);
    ```
4. Access elements of the array using the `at()` function or the subscript operator `[]`:
    ```c++
    int element = array.at(0);
    int& elementRef = array[1];
    ```   

5. To reserve memory use `reserve()`:
   ```c++
   int capacity = 10;
   reserve(capacity);
   ```

6. To get size, capacity or check if it is empty use `size()`, `capacity()` and `empty()`:
   ```c++
   size(&array);
   capacity(&array);
   empty(&array);
   ```
