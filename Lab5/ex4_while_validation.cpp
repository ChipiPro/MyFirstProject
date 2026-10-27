// EXERCISE 4: Keep asking until the user enters an integer from 5 to 10
#include <iostream>
#include <string>
#include <stdexcept>   // for invalid_argument
using namespace std;

int main() {
    bool accepted = false;     // becomes true once we get a good value
    int value = 0;             // will hold the final good number

    while (!accepted) {        // repeat while NOT accepted
        cout << "Enter an integer between 5 and 10: ";

        string line;
        if (!getline(cin, line)) {   // read the whole line as text; if input ended, stop (avoids infinite loop)
            return 1;
        }

        try {
            size_t used = 0;                   // will store how many characters stoi consumed
            int number = stoi(line, &used);    // try to turn the text into an integer
            if (used != line.size()) {         // "7abc" would give 7 with leftovers, so reject it
                throw invalid_argument("extra characters");
            }
            if (number >= 5 && number <= 10) { // the range check
                value = number;
                accepted = true;               // good input, so the loop will end
            } else {
                cout << "Out of range. ";      // valid integer but wrong range, so the loop asks again
            }
        } catch (...) {                        // stoi throws if the text is not a number at all (e.g. "hello")
            cout << "That is not a valid integer. ";
        }
    }

    // We only get here when the loop has ended, so the input is definitely valid.
    cout << "Thank you, your input " << value << " has been accepted." << endl;
    return 0;
}
