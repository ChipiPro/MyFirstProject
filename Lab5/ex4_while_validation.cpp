// Exercise 4: Validate integer input between 5 and 10 using a while loop
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main() {
    bool accepted = false;
    int value = 0;

    // Keep prompting until a valid integer between 5 and 10 is entered
    while (!accepted) {
        cout << "Enter an integer between 5 and 10: ";

        string line;
        if (!getline(cin, line)) {
            return 1;
        }

        // Convert input to an integer and verify no extra characters remain
        try {
            size_t used = 0;
            int number = stoi(line, &used);
            if (used != line.size()) {
                throw invalid_argument("extra characters");
            }

            // Check if the integer falls within the allowed range
            if (number >= 5 && number <= 10) {
                value = number;
                accepted = true;
            } else {
                cout << "Out of range. ";
            }
        } catch (...) {
            cout << "That is not a valid integer. ";
        }
    }

    cout << "Thank you, your input " << value << " has been accepted." << endl;
    return 0;
}
