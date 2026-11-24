// Rectangle.h : Derived class inheriting publicly from Polygon
#pragma once

#include "Polygon.h"

class Rectangle : public Polygon {
  public:
    // Calculate and return the area of the rectangle
    int Area();
};
