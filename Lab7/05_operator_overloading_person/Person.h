// Person.h
#pragma once
#include <string>

using namespace std;

class Person
{
public:
    Person();
    Person(float newWeight);
    // The handout's main calls Person("Jane", 60.0f), so we need a constructor that takes a name and weight.
    // newAge has a default value, so the two-argument call in the handout still works.
    Person(string newFirstName, float newWeight, int newAge = 0);

    ~Person();

    // Overload the add operator (adds two people's weights)
    float operator + (const Person& otherPerson) const;

    // Question 2(d): relational operators using mFirstName
    bool operator == (const Person& otherPerson) const;
    bool operator != (const Person& otherPerson) const;

    // Question 2(e): relational operators using mAge
    bool operator < (const Person& otherPerson) const;
    bool operator > (const Person& otherPerson) const;

    // Question 3: conversion operator Person -> int (returns the age)
    operator int () const;

    // Question 4: more conversion operators
    operator string () const;          // Person -> string (first name)
    operator float () const;           // Person -> float (weight)

private:
    float mWeight;
    string mFirstName;
    int mAge;
};
