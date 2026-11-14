// Rectangle.h
#pragma once

#include "Polygon.h"

class Rectangle : public Polygon {   // public inheritance: Rectangle IS-A Polygon
  public:
    Rectangle(int width, int height);   // lets us write new Rectangle(4,5)
    int Area() override;       // override = I promise this replaces a virtual function of the base class
};
