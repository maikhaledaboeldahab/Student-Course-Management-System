#include "Person.h"
#include<string>
using namespace std;

Person :: Person(string name) {
    this->name = name;  // 'this->' distinguishes the attribute from the parameter
}

string Person:: getName(){  // const = this function won't modify the object
    return name;
}