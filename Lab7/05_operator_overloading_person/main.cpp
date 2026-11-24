// main.cpp : Driver program testing overloaded and conversion operators for Person
#include <iostream>
#include "Person.h"

int main() {
    // Initialize Person objects with name, weight, and age
    Person Jane = Person("Jane", 60.0f, 25);
    Person John = Person("John", 75.0f, 30);

    // Test overloaded + operator
    float totalWeight = Jane + John;
    cout << "Total weight: " << totalWeight << endl;

    // Test relational operators == and != using first names
    if (Jane == John) {
        cout << "This is the same person" << endl;
    }
    if (Jane != John) {
        cout << "This is NOT the same person" << endl;
    }

    // Test relational operators < and > using ages
    if (Jane < John) {
        cout << "Jane is younger than John" << endl;
    }
    if (John > Jane) {
        cout << "John is older than Jane" << endl;
    }

    // Test int conversion operator
    int johnAge = John;
    cout << "John's Age: " << johnAge << endl;

    // Test string and float conversion operators
    string janeFirstName = Jane;
    cout << "Jane's FirstName: " << janeFirstName << endl;

    float janeWeight = Jane;
    cout << "Jane's weight: " << janeWeight << endl;

    return 0;
}
