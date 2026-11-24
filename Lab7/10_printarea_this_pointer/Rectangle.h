// Rectangle.h : Derived class inheriting publicly from Polygon
#pragma once

#include "Polygon.h"

class Rectangle : public Polygon {
  public:
    // Override the pure virtual Area function from Polygon
    int Area() override;
};
