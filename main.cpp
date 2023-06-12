#include <iostream>
#include "DynamicArray.h"


int main() {
//    int a[] = { 1, 2, 4, 5 };
//    Array arr1(a, 4);
//    arr1[2] = 6;
//    arr1.print();
//    arr1[8] = 6;
//    return 0;


    DynamicArray* darr = new DynamicArray();

    std::cout << "daar size:" << darr->getSize() << std::endl;
    std::cout << "darr capacity: " << darr->getCapacity() << std::endl;
    std::cout << "darr empty: " << darr->empty() << std::endl;


    for (int i = 0; i < 4; ++i) {
        darr->push_back(i);
    }


    std::cout << "daar size:" << darr->getSize() << std::endl;
    std::cout << "darr capacity: " << darr->getCapacity() << std::endl;
    std::cout << "darr empty: " << darr->empty() << std::endl;

    std::cout << std::endl;
    std::cout << "at() function" << std::endl;

    for (int i = 0; i < darr->getSize(); ++i) {
        std::cout << "daar at " << i << ": " << darr->at(i) << std::endl;
    }

    darr->insert(2, 19);
    darr->insert(darr->getSize(), 20);

    std::cout << std::endl;
    std::cout << "daar after insert() function" << std::endl;

    for (int i = 0; i < darr->getSize(); ++i) {
        std::cout << "daar at " << i << ": " << darr->at(i) << std::endl;
    }

//    daar adding 20 to elements with operator[];

    for (int i = 0; i < darr->getSize(); ++i) {
        (*darr)[i] = i + 20 ;
    }

    std::cout << std::endl << "daar adding 20 to elements with operator[]" << std::endl;

    for (int i = 0; i < darr->getSize(); ++i) {
        std::cout << "daar at " << i << ": " << (*darr)[i] << std::endl;
    }

    return 0;
}
