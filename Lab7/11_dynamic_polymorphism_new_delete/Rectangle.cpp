// Rectangle.cpp
#include "Rectangle.h"

Rectangle::Rectangle(int width, int height)
{
    SetValues(width, height);       // reuse the base class function to store the numbers
}

int Rectangle::Area()
{
    return mWidth * mHeight;
}
