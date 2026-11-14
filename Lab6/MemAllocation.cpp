// LAB 6, PART 7: Dynamic memory with new and delete[]
#include <iostream>
using namespace std;

int main() {

    int numberOfElements = 0;
    int* dynamicArray = nullptr;              // will point at memory we request while the program runs

    cout << "How many numbers would you like to type? ";
    cin >> numberOfElements;

    dynamicArray = new int[numberOfElements]; // ask the system for that many ints (size decided at run time)

    if (dynamicArray == nullptr) {            // handout's check for a failed allocation
        cout << "Error: memory could not be allocated";
    }
    else {
        for (int i = 0; i < numberOfElements; i++) {   // fill the array from the keyboard
            cout << "Enter number: ";
            cin >> dynamicArray[i];                    // pointer used like an array
        }

        cout << "You have entered: ";
        for (int j = 0; j < numberOfElements; j++) {   // print them back
            cout << dynamicArray[j] << ", ";
        }

        delete[] dynamicArray;                // give the memory back. Use delete[] for arrays made with new[]
    }                                         // MISTAKE: forgetting delete[] causes a memory leak

    return 0;
}
