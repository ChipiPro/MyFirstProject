// Exercise 1: Dynamically allocate an int and a string
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Dynamically allocate an integer and a string on the heap
    int* pNumber = new int;
    string* pText = new string;

    cout << "Enter an integer: ";
    cin >> *pNumber;

    // Clear the newline left in the input buffer before calling getline
    cin.ignore(1000, '\n');

    cout << "Enter some text: ";
    getline(cin, *pText);

    // Output the dynamically allocated values
    cout << "The dynamically allocated integer is: " << *pNumber << endl;
    cout << "The dynamically allocated string is: " << *pText << endl;

    // Free allocated memory and reset pointers
    delete pNumber;
    delete pText;
    pNumber = nullptr;
    pText = nullptr;

    return 0;
}
