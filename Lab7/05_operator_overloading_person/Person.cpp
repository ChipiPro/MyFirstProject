// Person.cpp
#include "Person.h"

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

// Person + Person gives the TOTAL WEIGHT (a float), not a new Person
float Person::operator + (const Person& otherPerson) const {
    return mWeight + otherPerson.mWeight;
}

// Same person if the first names are the same
bool Person::operator == (const Person& otherPerson) const {
    return mFirstName == otherPerson.mFirstName;
}
bool Person::operator != (const Person& otherPerson) const {
    return mFirstName != otherPerson.mFirstName;
}

// Younger / older by age
bool Person::operator < (const Person& otherPerson) const {
    return mAge < otherPerson.mAge;
}
bool Person::operator > (const Person& otherPerson) const {
    return mAge > otherPerson.mAge;
}

// Conversion operators: they have NO return type written, the type is in the name
Person::operator int () const {
    return mAge;
}
Person::operator string () const {
    return mFirstName;
}
Person::operator float () const {
    return mWeight;
}
