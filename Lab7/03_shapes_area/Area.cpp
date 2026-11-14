// Area.cpp
#include "Area.h"

const float PI = 3.14159265f;                       // value of pi used for the circle

float Area::CalculateSquareArea(const shapes::Square& square) {
    float s = square.GetSideLength();               // read the side from the object passed in
    return s * s;                                   // side x side
}

float Area::CalculateTriangleArea(const shapes::Triangle& triangle) {
    return 0.5f * triangle.GetBase() * triangle.GetHeight();   // half x base x height
}

float Area::CalculateCircleArea(const shapes::Circle& circle) {
    float r = circle.GetRadius();
    return PI * r * r;                              // pi x radius squared
}
