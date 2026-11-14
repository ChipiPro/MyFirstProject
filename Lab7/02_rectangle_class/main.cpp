// main.cpp : uses the Rectangle class (Questions 1 and 2)
#include <iostream>
#include <string>
#include "Rectangle.h"
using namespace std;

// Keeps asking until the user types a positive number.
float readPositive(const string& prompt) {
    while (true) {
        cout << prompt;
        string line;
        if (!getline(cin, line)) exit(1);          // input ended, so stop safely
        try {
            size_t used = 0;
            float value = stof(line, &used);       // text -> decimal number
            if (used == line.size() && value > 0) return value;
        } catch (...) { }
        cout << "Invalid. Please enter a positive number." << endl;
    }
}

int main() {
    // ---------- QUESTION 1: default constructor + accessor methods ----------
    Rectangle rect1;                               // starts as 0 x 0 (default constructor)

    rect1.SetLength(readPositive("Rectangle 1 - enter the length: "));
    rect1.SetWidth(readPositive("Rectangle 1 - enter the width: "));

    cout << "Area of rectangle 1: " << rect1.GetArea() << endl;

    // ---------- QUESTION 2: overloaded constructor ----------
    float length2 = readPositive("Rectangle 2 - enter the length: ");
    float width2  = readPositive("Rectangle 2 - enter the width: ");

    Rectangle rect2(length2, width2);              // values go in through the overloaded constructor

    cout << "Area of rectangle 2: " << rect2.GetArea() << endl;

    return 0;
}
