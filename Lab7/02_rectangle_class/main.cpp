// main.cpp : Driver program for the Rectangle class (Questions 1 and 2)
#include <iostream>
#include <string>
#include "Rectangle.h"
using namespace std;

// Prompt the user until a valid positive number is entered
float readPositive(const string& prompt) {
    while (true) {
        cout << prompt;
        string line;
        if (!getline(cin, line)) exit(1);
        try {
            size_t used = 0;
            float value = stof(line, &used);
            if (used == line.size() && value > 0) return value;
        } catch (...) { }
        cout << "Invalid. Please enter a positive number." << endl;
    }
}

int main() {
    // Question 1: Default constructor with setter methods
    Rectangle rect1;

    rect1.SetLength(readPositive("Rectangle 1 - enter the length: "));
    rect1.SetWidth(readPositive("Rectangle 1 - enter the width: "));

    cout << "Area of rectangle 1: " << rect1.GetArea() << endl;

    // Question 2: Overloaded constructor
    float length2 = readPositive("Rectangle 2 - enter the length: ");
    float width2  = readPositive("Rectangle 2 - enter the width: ");

    Rectangle rect2(length2, width2);

    cout << "Area of rectangle 2: " << rect2.GetArea() << endl;

    return 0;
}
