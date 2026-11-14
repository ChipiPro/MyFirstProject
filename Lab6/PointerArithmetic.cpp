// LAB 6, PART 6: Pointer arithmetic with ++
#include <iostream>
using namespace std;

int main() {

    int* pPointer = nullptr;                  // null pointer to start

    int numbersArray[3] = {10, 20, 30};

    pPointer = numbersArray;                  // point at the first element

    cout << "Address at pPointer: " << pPointer << endl;            // address of element 0
    cout << "Address of numbersArray[0]: " << &numbersArray[0] << endl;   // same address as above

    cout << "Value at pPointer: " << *pPointer << endl;             // 10 (first element)

    cout << "Value at ++pPointer: " << *(++pPointer) << endl;       // PREFIX: move first, then read: 20

    pPointer = numbersArray;                  // reset to the first element

    cout << "Value at pPointer++: " << *(pPointer++) << endl;       // POSTFIX: read the old spot (10),
                                                                    // THEN move. pPointer is now on 20
    return 0;
}
