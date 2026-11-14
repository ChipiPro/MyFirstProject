// main.cpp : Questions 2, 3 and 4 combined (the handout adds to the same main step by step)
#include <iostream>
#include "Person.h"

int main() {
    // The handout main had no ages. Ages are added here so the < and > tests have something to compare.
    Person Jane = Person("Jane", 60.0f, 25);
    Person John = Person("John", 75.0f, 30);

    // ----- 2(c) the + operator -----
    float totalWeight = Jane + John;
    cout << "Total weight: " << totalWeight << endl;               // 135

    // ----- 2(d) == and != using first names -----
    if (Jane == John) {
        cout << "This is the same person" << endl;
    }
    if (Jane != John) {
        cout << "This is NOT the same person" << endl;             // printed (names differ)
    }

    // ----- 2(e) < and > using age -----
    if (Jane < John) {
        cout << "Jane is younger than John" << endl;               // printed (25 < 30)
    }
    if (John > Jane) {
        cout << "John is older than Jane" << endl;                 // printed
    }

    // ----- 3: conversion operator int -----
    int johnAge = John;                                            // C++ calls John.operator int()
    cout << "John's Age: " << johnAge << endl;                     // 30

    // ----- 4: conversion operators string and float -----
    string janeFirstName = Jane;                                   // calls operator string()
    cout << "Jane's FirstName: " << janeFirstName << endl;

    float janeWeight = Jane;                                       // calls operator float()
    cout << "Jane's weight: " << janeWeight << endl;

    return 0;
}
