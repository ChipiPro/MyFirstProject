// Box.h
#pragma once
#include <iostream>
using namespace std;

class Box {
public:
    Box();                                             // default constructor
    Box(const double newLength, const double newBreadth, const double newHeight);
    ~Box();

    double GetVolume();                                // length x breadth x height

    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);

    // Overload the + operator to add two Box objects.
    Box operator+(const Box& b);

private:
    double length;                                     // Length of a box
    double breadth;                                    // Breadth of a box
    double height;                                     // Height of a box
};
