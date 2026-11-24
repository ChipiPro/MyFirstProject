// Exercise 3: Print array elements that start with 'B'
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialize the array of string codes
    string codes[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Calculate the number of elements in the array
    int size = sizeof(codes) / sizeof(codes[0]);

    // Loop through the array and print elements starting with 'B'
    for (int i = 0; i < size; i++) {
        if (codes[i][0] == 'B') {
            cout << codes[i] << endl;
        }
    }

    return 0;
}
