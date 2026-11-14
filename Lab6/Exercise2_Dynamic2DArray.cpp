// LAB 6, EXERCISE 2: Dynamic 2D array of doubles. Rows and columns are entered by the user, max 3 each.
#include <iostream>
#include <string>
using namespace std;

// Keeps asking until the user types a whole number from 1 to 3.
int readDimension(const string& label) {
    while (true) {
        cout << "Enter the number of " << label << " (1 to 3): ";
        string line;
        if (!getline(cin, line)) exit(1);     // input closed, so stop safely
        try {
            size_t used = 0;
            int n = stoi(line, &used);        // text -> integer
            if (used == line.size() && n >= 1 && n <= 3) return n;   // whole text was a number in range
        } catch (...) { }                     // not a number: fall through to the message
        cout << "Invalid. The dimension must be a whole number from 1 to 3." << endl;
    }
}

// Reads one decimal number (no range limit).
double readDouble(const string& prompt) {
    while (true) {
        cout << prompt;
        string line;
        if (!getline(cin, line)) exit(1);
        try {
            size_t used = 0;
            double d = stod(line, &used);
            if (used == line.size()) return d;
        } catch (...) { }
        cout << "Invalid number. Try again." << endl;
    }
}

int main() {

    int rows = readDimension("rows");         // both limited to 3 by the function above
    int cols = readDimension("columns");

    // Build the 2D array in two steps:
    double** table = new double*[rows];       // step 1: an array of 'rows' pointers (one per row)
    for (int r = 0; r < rows; r++) {
        table[r] = new double[cols];          // step 2: each row gets its own array of 'cols' doubles
    }

    // Nested loops: outer loop = rows, inner loop = columns, so every element gets visited.
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            table[r][c] = readDouble("Enter value for element [" + to_string(r) + "][" + to_string(c) + "]: ");
        }
    }

    cout << "\nThe array contains:" << endl;  // print every element, one row per line
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << table[r][c] << "\t";
        }
        cout << endl;
    }

    // Free memory in the REVERSE order of creation: each row first, then the row-pointer array.
    for (int r = 0; r < rows; r++) {
        delete[] table[r];
    }
    delete[] table;
    table = nullptr;

    return 0;
}
