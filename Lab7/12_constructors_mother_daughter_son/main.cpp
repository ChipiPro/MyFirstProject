// main.cpp : shows which Mother constructor runs for Daughter and for Son
#include <iostream>
#include "Daughter.h"
#include "Son.h"

using namespace std;

int main ()
{
    Daughter theDaughter(1);       // prints: Mother: no parameters / Daughter: int parameter
    Son theSon(2);                 // prints: Mother: int parameter  / Son: int parameter

    return 0;
}
