// Swap two integers using pointers
#include <iostream>
using namespace std;

// Parameters hold the addresses of the two integers
void SwapNumbers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl;
    cout << "varB before swap: " << varB << endl;

    // Pass the addresses of varA and varB
    SwapNumbers(&varA, &varB);

    cout << "varA after swap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;

    return 0;
}
