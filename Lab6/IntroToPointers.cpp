// Part 1: Introduction to pointers
#include <iostream>
using namespace std;

int main() {
    // Initialize pointer to nullptr
    int* pPointer = nullptr;

    int integerVar = 5;

    // Assign the address of integerVar to pPointer
    pPointer = &integerVar;

    // Output the values and memory addresses
    cout << "integerVar: " << integerVar << endl;
    cout << "Address of integerVar: " << &integerVar << endl;
    cout << "pPointer: " << pPointer << endl;
    cout << "Address of pPointer: " << &pPointer << endl;

    return 0;
}

