// Exercise 5: Area calculator with a repeating menu
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

// Functions to calculate the area of each shape
double triangleArea(double base, double height) { return 0.5 * base * height; }
double rectangleArea(double length, double width) { return length * width; }
double squareArea(double side) { return side * side; }

// Prompt the user until a valid positive number is entered
double readNumber(const string& prompt) {
    while (true) {
        cout << prompt;
        string line;
        if (!getline(cin, line)) exit(1);
        try {
            size_t used = 0;
            double n = stod(line, &used);
            if (used == line.size() && n > 0) return n;
        } catch (...) { }
        cout << "Invalid number. Please enter a positive number." << endl;
    }
}

int main() {
    // Repeat the menu until the user selects Quit
    while (true) {
        cout << "\nChoose a shape to calculate the area for:\n";
        cout << "1. Triangle\n2. Rectangle\n3. Square\n4. Quit\n";
        cout << "Enter your choice: ";

        string choice;
        if (!getline(cin, choice)) break;

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
            return 0;
        }
        else {
            cout << "Invalid input. Please enter 1, 2, 3 or 4." << endl;
        }
    }

    return 0;
}
