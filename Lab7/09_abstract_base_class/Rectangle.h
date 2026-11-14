// Rectangle.h
#pragma once

#include "Polygon.h"

class Rectangle : public Polygon {   // public inheritance: Rectangle IS-A Polygon
  public:
    int Area() override;       // override = I promise this replaces a virtual function of the base class
};
