// Triangle.cpp
#include "Triangle.h"

namespace shapes {
    Triangle::Triangle() { mBase = 0.0f; mHeight = 0.0f; }
    Triangle::Triangle(float base, float height) { mBase = base; mHeight = height; }
    Triangle::~Triangle() { }
    void Triangle::SetBase(float base) { mBase = base; }
    void Triangle::SetHeight(float height) { mHeight = height; }
    float Triangle::GetBase() const { return mBase; }
    float Triangle::GetHeight() const { return mHeight; }
}
