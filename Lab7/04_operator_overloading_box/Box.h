// Box.h : Declaration of the Box class
#pragma once
#include <iostream>
using namespace std;

class Box {
public:
    // Constructors and destructor
    Box();
    Box(const double newLength, const double newBreadth, const double newHeight);
    ~Box();

    // Volume and dimension setters
    double GetVolume();
    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);

    // Overload the + operator to add two Box objects
    Box operator+(const Box& b);

private:
    double length;
    double breadth;
    double height;
};
