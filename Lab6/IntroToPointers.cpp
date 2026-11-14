// LAB 6, PART 1: Introduction to pointers
#include <iostream>        // cout, endl
using namespace std;

int main() {

    // A pointer stores an ADDRESS. "int*" means "pointer to an int".
    // nullptr means "points at nothing yet", so it never holds a random address.
    int* pPointer = nullptr;

    int integerVar = 5;                       // a normal variable holding the value 5

    pPointer = &integerVar;                   // & = "address of". pPointer now holds where integerVar lives

    cout << "integerVar: " << integerVar << endl;                 // prints the value: 5
    cout << "Address of integerVar: " << &integerVar << endl;     // prints the address (e.g. 0x7ffe...)
    cout << "pPointer: " << pPointer << endl;                     // prints the address stored INSIDE pPointer
                                                                  // (it matches the line above)
    cout << "Address of pPointer: " << &pPointer << endl;         // the pointer itself is a variable too,
                                                                  // so it has its own, different address
    return 0;
}
