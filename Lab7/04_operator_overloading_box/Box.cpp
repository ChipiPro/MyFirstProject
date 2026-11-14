// Box.cpp
#include "Box.h"                   // NOTE: the handout also had "#pragma once" here, but it is only for headers

Box::Box() {
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}

Box::Box(const double newLength, const double newBreadth, const double newHeight) {
    length = newLength;
    breadth = newBreadth;
    height = newHeight;
}

Box::~Box() { }

double Box::GetVolume() {
    return length * breadth * height;
}
void Box::SetLength(double len) { length = len; }
void Box::SetBreadth(double bre) { breadth = bre; }
void Box::SetHeight(double hei) { height = hei; }

// Overload + operator to add two Box objects.
// When you write Box1 + Box2: 'this' is Box1 (the object on the left), 'b' is Box2 (on the right).
Box Box::operator+(const Box& b) {
    Box box;                                           // a new, empty box to hold the answer

    box.length = this->length + b.length;              // this-> means "the object that called me"
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;                                        // hand the new box back
}
