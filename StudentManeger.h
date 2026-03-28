#pragma once

#include <vector>
#include"Student.h"

using namespace std;

class StudentManager {
private:
    vector<Student> students;  // stores all students

public:
    bool idExists(int id);
    void addStudent();
    void removeStudent();
    void searchStudent();
    void displayAll();
    void enrollInCourse();
    void showCourses();
    void sortByGPA();
};