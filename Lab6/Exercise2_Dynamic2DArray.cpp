// Exercise 2: Dynamic 2D array of doubles (maximum dimensions 3x3)
#include <iostream>
#include <string>
using namespace std;

// Prompt until a valid dimension between 1 and 3 is entered
int readDimension(const string& label) {
    while (true) {
        cout << "Enter the number of " << label << " (1 to 3): ";
        string line;
        if (!getline(cin, line)) exit(1);
        try {
            size_t used = 0;
            int n = stoi(line, &used);
            if (used == line.size() && n >= 1 && n <= 3) return n;
        } catch (...) { }
        cout << "Invalid. The dimension must be a whole number from 1 to 3." << endl;
    }
}

// Prompt until a valid decimal number is entered
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
    int rows = readDimension("rows");
    int cols = readDimension("columns");

    // Dynamically allocate the 2D array
    double** table = new double*[rows];
    for (int r = 0; r < rows; r++) {
        table[r] = new double[cols];
    }

    // Populate each element using nested loops
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            table[r][c] = readDouble("Enter value for element [" + to_string(r) + "][" + to_string(c) + "]: ");
        }
    }

    // Display the 2D array elements
    cout << "\nThe array contains:" << endl;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << table[r][c] << "\t";
        }
        cout << endl;
    }

    // Deallocate each row before deleting the outer pointer array
    for (int r = 0; r < rows; r++) {
        delete[] table[r];
    }
    delete[] table;
    table = nullptr;

    return 0;
}
