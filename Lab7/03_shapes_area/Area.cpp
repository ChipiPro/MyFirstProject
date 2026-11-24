// Area.cpp : Implementation of the Area class
#include "Area.h"

const float PI = 3.14159265f;

// Calculate the area of a Square
float Area::CalculateSquareArea(const shapes::Square& square) {
    float s = square.GetSideLength();
    return s * s;
}

// Calculate the area of a Triangle
float Area::CalculateTriangleArea(const shapes::Triangle& triangle) {
    return 0.5f * triangle.GetBase() * triangle.GetHeight();
}

// Calculate the area of a Circle
float Area::CalculateCircleArea(const shapes::Circle& circle) {
    float r = circle.GetRadius();
    return PI * r * r;
}
