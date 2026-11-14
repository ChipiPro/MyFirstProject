// Area.h : a class with NO member variables and NO constructors, only static functions
#pragma once
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area {
public:
    // static = you call them on the CLASS (Area::...), you never need to create an Area object
    static float CalculateSquareArea(const shapes::Square& square);
    static float CalculateTriangleArea(const shapes::Triangle& triangle);
    static float CalculateCircleArea(const shapes::Circle& circle);
};
