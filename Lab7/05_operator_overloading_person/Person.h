// Person.h : Declaration of the Person class
#pragma once
#include <string>

using namespace std;

class Person
{
public:
    // Constructors and destructor
    Person();
    Person(float newWeight);
    Person(string newFirstName, float newWeight, int newAge = 0);
    ~Person();

    // Overload the + operator to add two Person weights
    float operator + (const Person& otherPerson) const;

    // Relational operators comparing first names
    bool operator == (const Person& otherPerson) const;
    bool operator != (const Person& otherPerson) const;

    // Relational operators comparing ages
    bool operator < (const Person& otherPerson) const;
    bool operator > (const Person& otherPerson) const;

    // Type conversion operators
    operator int () const;
    operator string () const;
    operator float () const;

private:
    float mWeight;
    string mFirstName;
    int mAge;
};
