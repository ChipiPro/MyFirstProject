// Triangle.cpp
#include "Triangle.h"

Triangle::Triangle(int width, int height)
{
    SetValues(width, height);       // reuse the base class function to store the numbers
}

int Triangle::Area()
{
    return mWidth * mHeight / 2;
}
