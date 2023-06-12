//
// Created by artyommargaryan on 6/12/23.
//

#ifndef DYNAMICARRAYCPP_DYNAMICARRAY_H
#define DYNAMICARRAYCPP_DYNAMICARRAY_H


class DynamicArray {
private:
    int *arr;
    int size;
    int capacity;

public:
    DynamicArray();

    int getSize() const;

    int getCapacity() const;

    bool empty() const;

    void reserve(int newCapacity);

    int at(int index);

    int& operator[](int index);

    void push_back(int elem);

    bool insert(int pos, int elem);

    ~DynamicArray();
};


#endif //DYNAMICARRAYCPP_DYNAMICARRAY_H
