// Circle.cpp
#include "Circle.h"

namespace shapes {
    Circle::Circle() { mRadius = 0.0f; }
    Circle::Circle(float radius) { mRadius = radius; }
    Circle::~Circle() { }
    void Circle::SetRadius(float radius) { mRadius = radius; }
    float Circle::GetRadius() const { return mRadius; }
}
