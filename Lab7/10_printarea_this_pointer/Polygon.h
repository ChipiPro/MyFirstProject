// Polygon.h : Abstract base class with pure virtual Area() and PrintArea()
#pragma once

class Polygon {
  protected:
    int mWidth;
    int mHeight;

  public:
    // Set width and height of the polygon
    void SetValues(int width, int height);

    // Pure virtual function overridden by derived classes
    virtual int Area() = 0;

    // Print the calculated area using the this pointer
    void PrintArea();
};
