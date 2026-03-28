#pragma once
#include<string>
using namespace std;
class Person {
protected:
    string name;  // protected = accessible by child classes, not outsiders

public:
    // Parameterized constructor
    Person(string name);
    string getName();
};