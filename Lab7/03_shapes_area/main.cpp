// main.cpp : Menu-driven area calculator using the shapes namespace and Area class
#include <iostream>
#include <string>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
using namespace std;

// Prompt until a valid positive number is entered
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
    // Repeat menu until the user selects Quit
    while (true) {
        cout << "\n1. Calculate the area of a square\n"
             << "2. Calculate the area of a triangle\n"
             << "3. Calculate the area of a circle\n"
             << "4. Quit\n"
             << "Enter your choice: ";

        string choice;
        if (!getline(cin, choice)) break;

        if (choice == "1") {
            shapes::Square square;
            square.SetSideLength(readPositive("Enter the side length: "));
            cout << "Area of the square: " << Area::CalculateSquareArea(square) << endl;
        }
        else if (choice == "2") {
            shapes::Triangle triangle;
            triangle.SetBase(readPositive("Enter the base: "));
            triangle.SetHeight(readPositive("Enter the height: "));
            cout << "Area of the triangle: " << Area::CalculateTriangleArea(triangle) << endl;
        }
        else if (choice == "3") {
            shapes::Circle circle;
            circle.SetRadius(readPositive("Enter the radius: "));
            cout << "Area of the circle: " << Area::CalculateCircleArea(circle) << endl;
        }
        else if (choice == "4") {
            cout << "Goodbye!" << endl;
            return 0;
        }
        else {
            cout << "Invalid choice. Please enter 1, 2, 3 or 4." << endl;
        }
    }

    return 0;
}
