// LAB 7 - PART 1b: Swap two integers using POINTERS
#include <iostream>
using namespace std;

// 'int* a' means: a holds the ADDRESS of an int.
// We use *a to reach the real variable at that address.
void SwapNumbers(int* a, int* b) {
    int temp = *a;     // temp = the value a points at
    *a = *b;           // the value at a's address becomes the value at b's address
    *b = temp;         // the value at b's address becomes the saved value
}

int main() {
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl;
    cout << "varB before swap: " << varB << endl;

    SwapNumbers(&varA, &varB);                      // with pointers the CALLER sends addresses using &
                                                    // MISTAKE: SwapNumbers(varA, varB) will not compile here
    cout << "varA after swap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;

    return 0;
}
