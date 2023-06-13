//
// Created by artyommargaryan on 6/12/23.
//

#include <iostream>
#include "DynamicArray.h"

DynamicArray::DynamicArray() {
    this->arr = nullptr;
    this->size = 0;
    this->capacity = 0;
}

int DynamicArray::getSize() const {
    return size;
}

int DynamicArray::getCapacity() const {
    return capacity;
}

bool DynamicArray::empty() const {
    return size == 0;
}

void DynamicArray::reserve(int newCapacity) {
    if (newCapacity <= this->capacity) {
        return;
    }

    int* tmp = new int[newCapacity];

    for (int i = 0; i < this->size; ++i) {
        tmp[i] = this->arr[i];
    }

    delete arr;

    this->arr = tmp;
    this->capacity = newCapacity;
}

int DynamicArray::at(int index) {
    if (index < 0 || index >= this->size) {
        std::cout << "Error: index is not valid\n";
        exit(0);
    }

    return arr[index];
}

int& DynamicArray::operator[](int index) {
    if (index < 0 || index >= this->size) {
        std::cout << "Error: index is not valid\n";
        exit(0);
    }

    return *(arr + index);
}

void DynamicArray::push_back(int elem) {
    if (this->size == this->capacity) {
        if (this->capacity == 0) {
            this->capacity = 1;
        } else {
            this->capacity = this->capacity * 2;
        }

        if (this->arr == nullptr) {
            this->arr = new int[this->capacity];
        } else {
            reserve(this->capacity);
        }
    }

    this->arr[this->size] = elem;
    ++(this->size);
}

bool DynamicArray::insert(int pos, int elem) {
    if (pos < 0 || pos > this->size)
        return false;

    if (this->size == this->capacity) {
        this->capacity *= 2;

        int* tmp = new int[this->capacity];
        
        for (int i = 0; i < pos; ++i) {
            tmp[i] = this->arr[i];
        }

        tmp[pos] = elem;

        for (int i = pos; i < this->size; ++i) {
            tmp[i + 1] = this->arr[i];
        }

        delete this->arr;
        this->arr = tmp;
    } else {
        for (int i = this->size - 1; i >= pos; --i) {
            this->arr[i + 1] = this->arr[i];
        }

        this->arr[pos] = elem;
    }

    ++(this->size);
    return true;
}

DynamicArray::~DynamicArray() {
    delete arr;
}
