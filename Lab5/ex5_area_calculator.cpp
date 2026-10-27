// EXERCISE 5: Area calculator with a menu that repeats until the user quits
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

// ----- Area functions: each takes numbers in and gives the area back -----
double triangleArea(double base, double height) { return 0.5 * base * height; }
double rectangleArea(double length, double width) { return length * width; }
double squareArea(double side) { return side * side; }

// Asks for a positive number and keeps asking until it gets one.
double readNumber(const string& prompt) {
    while (true) {
        cout << prompt;
        string line;
        if (!getline(cin, line)) exit(1);          // input closed, so quit safely
        try {
            size_t used = 0;
            double n = stod(line, &used);          // text -> decimal number
            if (used == line.size() && n > 0) return n;   // whole text was a number and it is positive
        } catch (...) { }                          // not a number: fall through to the message
        cout << "Invalid number. Please enter a positive number." << endl;
    }
}

int main() {
    while (true) {                                 // loops forever until we hit "return" on Quit
        cout << "\nChoose a shape to calculate the area for:\n";
        cout << "1. Triangle\n2. Rectangle\n3. Square\n4. Quit\n";
        cout << "Enter your choice: ";

        string choice;
        if (!getline(cin, choice)) break;          // input ended, so leave the loop

        if (choice == "1") {
            double b = readNumber("Enter the base: ");
            double h = readNumber("Enter the height: ");
            cout << "Area of the triangle = " << triangleArea(b, h) << endl;
        }
        else if (choice == "2") {
            double l = readNumber("Enter the length: ");
            double w = readNumber("Enter the width: ");
            cout << "Area of the rectangle = " << rectangleArea(l, w) << endl;
        }
        else if (choice == "3") {
            double s = readNumber("Enter the side: ");
            cout << "Area of the square = " << squareArea(s) << endl;
        }
        else if (choice == "4") {
            cout << "Goodbye!" << endl;
            return 0;                              // the ONLY normal way out of the program
        }
        else {
            cout << "Invalid input. Please enter 1, 2, 3 or 4." << endl;   // wrong choice, menu shows again
        }
    }
    return 0;
}
