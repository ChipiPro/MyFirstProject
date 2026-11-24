// Area.h : Declaration of the Area class
#pragma once
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area {
public:
    // Static methods to calculate the area of each shape
    static float CalculateSquareArea(const shapes::Square& square);
    static float CalculateTriangleArea(const shapes::Triangle& triangle);
    static float CalculateCircleArea(const shapes::Circle& circle);
};
