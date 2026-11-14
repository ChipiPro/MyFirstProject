// LAB 6, EXERCISE 1: Dynamically allocate an int and a string, fill them from the user, print them
#include <iostream>
#include <string>                             // for the string type and getline
using namespace std;

int main() {

    int* pNumber = new int;                   // new int      : one int created on the heap
    string* pText = new string;               // new string   : one string created on the heap

    cout << "Enter an integer: ";
    cin >> *pNumber;                          // *pNumber means "the int that pNumber points to"

    cin.ignore(1000, '\n');                   // throw away the leftover Enter key, otherwise getline
                                              // below would read an empty line

    cout << "Enter some text: ";
    getline(cin, *pText);                     // read a whole line (spaces allowed) into the string

    cout << "The dynamically allocated integer is: " << *pNumber << endl;
    cout << "The dynamically allocated string is: " << *pText << endl;

    delete pNumber;                           // single objects use delete (NOT delete[])
    delete pText;
    pNumber = nullptr;                        // good habit: stop pointers from pointing at freed memory
    pText = nullptr;

    return 0;
}
