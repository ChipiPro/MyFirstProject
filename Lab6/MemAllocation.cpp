// Part 7: Dynamic memory allocation with new and delete[]
#include <iostream>
using namespace std;

int main() {
    int numberOfElements = 0;
    int* dynamicArray = nullptr;

    cout << "How many numbers would you like to type? ";
    cin >> numberOfElements;

    // Dynamically allocate an integer array of the requested size
    dynamicArray = new int[numberOfElements];

    if (dynamicArray == nullptr) {
        cout << "Error: memory could not be allocated";
    }
    else {
        // Read elements into the dynamic array
        for (int i = 0; i < numberOfElements; i++) {
            cout << "Enter number: ";
            cin >> dynamicArray[i];
        }

        // Display entered elements
        cout << "You have entered: ";
        for (int j = 0; j < numberOfElements; j++) {
            cout << dynamicArray[j] << ", ";
        }

        // Free the dynamically allocated array
        delete[] dynamicArray;
    }

    return 0;
}
