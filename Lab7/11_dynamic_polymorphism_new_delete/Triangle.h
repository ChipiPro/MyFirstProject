// Triangle.h
#pragma once

#include "Polygon.h"

class Triangle : public Polygon {   // public inheritance: Triangle IS-A Polygon
  public:
    Triangle(int width, int height);   // lets us write new Triangle(4,5)
    int Area() override;       // override = I promise this replaces a virtual function of the base class
};
