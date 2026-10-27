// EXERCISE 3: Print array elements that start with "B"
#include <iostream>
#include <string>      // needed for the string type
using namespace std;

int main() {
    // An array of 8 strings. The compiler counts them for us.
    string codes[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    int size = sizeof(codes) / sizeof(codes[0]);   // total bytes / bytes of one item = number of items (8)

    for (int i = 0; i < size; i++) {               // i goes 0,1,2,...,7 (arrays start at 0)
        if (codes[i][0] == 'B') {                  // codes[i][0] is the FIRST character of item i
                                                   // MISTAKE: use single quotes 'B' for one character,
                                                   // double quotes "B" are for whole strings
            cout << codes[i] << endl;              // print the matching item
        }
    }
    return 0;
}
