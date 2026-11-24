// Person.cpp : Implementation of the Person class
#include "Person.h"

// Constructors and destructor
Person::Person() {
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

Person::Person(float newWeight) {
    mWeight = newWeight;
    mFirstName = "";
    mAge = 0;
}

Person::Person(string newFirstName, float newWeight, int newAge) {
    mFirstName = newFirstName;
    mWeight = newWeight;
    mAge = newAge;
}

Person::~Person() { }

// Overload + operator to return the combined weight of two Person objects
float Person::operator + (const Person& otherPerson) const {
    return mWeight + otherPerson.mWeight;
}

// Relational operators to compare first names
bool Person::operator == (const Person& otherPerson) const {
    return mFirstName == otherPerson.mFirstName;
}
bool Person::operator != (const Person& otherPerson) const {
    return mFirstName != otherPerson.mFirstName;
}

// Relational operators to compare ages
bool Person::operator < (const Person& otherPerson) const {
    return mAge < otherPerson.mAge;
}
bool Person::operator > (const Person& otherPerson) const {
    return mAge > otherPerson.mAge;
}

// Type conversion operators
Person::operator int () const {
    return mAge;
}
Person::operator string () const {
    return mFirstName;
}
Person::operator float () const {
    return mWeight;
}
