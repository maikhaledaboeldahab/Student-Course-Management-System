#include<iostream>
#include<string>
#include<set>
#include"Person.h"
#include "Student.h"

using namespace std;



Student :: Student(int id, string name, double gpa)
        : Person(name), id(id), gpa(gpa) {
    }

int Student::getId() const { return id; }
double Student::getGpa() const { return gpa; }

    // Course management
void Student::enrollCourse(const string& course) {
    courses.insert(course);  // set automatically rejects duplicates
}

void Student::displayCourses() const {
    if (courses.empty()) {
        cout << "No courses enrolled.\n";
        return;
    }
    for (const string& c : courses) {  // range-based for loop
        cout << "  - " << c << "\n";
    }
}

void Student::display() const {
    cout << "ID: " << id
        << " | Name: " << name   
        << " | GPA: " << gpa << "\n";
}


