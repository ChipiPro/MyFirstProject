// Polygon.h : Base class with protected dimensions and a virtual Area function
#pragma once

class Polygon {
  protected:
    int mWidth;
    int mHeight;

  public:
    // Set width and height of the polygon
    void SetValues(int width, int height);

    // Virtual function to be overridden by derived classes
    virtual int Area();
};
