#pragma once
#include<iostream>
#include<string>
#include<set>
#include"Person.h"

using namespace std;
class Student : public Person {
private:
    int id;
    double gpa;
    set<string> courses;  // set = no duplicates allowed, auto-sorted

public:
    // Constructor — notice we call Person's constructor using the initializer list
    Student(int id, string name, double gpa);
        
    int getId() const;
    double getGpa()const;

    // Course management
    void enrollCourse(const string& course);
    void displayCourses()const;

    // Display student info
    void display()const;
};

