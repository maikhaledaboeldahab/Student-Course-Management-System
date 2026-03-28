#include "StudentManeger.h"
#include "Student.h"
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>  // for sort(), find_if()
#include <string>
using namespace std;

bool StudentManager::idExists(int id) {
    auto it = find_if(students.begin(), students.end(),
        [id](const Student& s) {
            return s.getId() == id;
        });
    return it != students.end();
}

void StudentManager::addStudent() {
    int id;
    string name;
    double gpa;

    // --- ID input with validation ---
    cout << "Enter Student ID: ";
    while (!(cin >> id)) {       // if user enters a letter instead of number
        cin.clear();              // clear the error flag
        cin.ignore(1000, '\n');   // discard the bad input
        cout << "Invalid! Enter a number: ";
    }

    // --- Check unique ID ---
    if (idExists(id)) {
        cout << "Error: A student with ID " << id << " already exists.\n";
        return;
    }

    // --- Name input ---
    cout << "Enter Name: ";
    cin.ignore();        // clear leftover newline from previous cin >>
    getline(cin, name);  // getline allows names with spaces like "Ali Ahmed"

    // --- GPA input with range validation ---
    cout << "Enter GPA (0.0 - 4.0): ";
    while (!(cin >> gpa) || gpa < 0.0 || gpa > 4.0) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid! GPA must be between 0.0 and 4.0: ";
    }

    students.push_back(Student(id, name, gpa));
    cout << "Student added successfully.\n";
}
void StudentManager::removeStudent() {
    int id;
    cout << "Enter Student ID to remove: ";
    cin >> id;

    // find_if returns an iterator to the student, or end() if not found
    auto it = find_if(students.begin(), students.end(),
        [id](const Student& s) {
            return s.getId() == id;
        });

    if (it == students.end()) {
        cout << "Student not found.\n";
        return;
    }

    cout << it->getName() << " removed successfully.\n";
    students.erase(it);
}
void StudentManager::searchStudent() {
    int id;
    cout << "Enter Student ID to search: ";
    cin >> id;

    auto it = find_if(students.begin(), students.end(),
        [id](const Student& s) {
            return s.getId() == id;
        });

    if (it == students.end()) {
        cout << "Student not found.\n";
        return;
    }

    it->display();
}
void StudentManager::displayAll() {
    if (students.empty()) {
        cout << "No students registered.\n";
        return;
    }

    cout << "\n--- All Students ---\n";
    for (const Student& s : students) {  // range-based for loop
        s.display();
    }
}
void StudentManager::enrollInCourse() {
    int id;
    string course;

    cout << "Enter Student ID: ";
    cin >> id;

    auto it = find_if(students.begin(), students.end(),
        [id](const Student& s) { return s.getId() == id; });

    if (it == students.end()) {
        cout << "Student not found.\n";
        return;
    }

    cout << "Enter Course Name: ";
    cin.ignore();
    getline(cin, course);

    it->enrollCourse(course);  // set inside Student handles duplicates automatically
    cout << "Enrolled in " << course << " successfully.\n";
}
void StudentManager::showCourses() {
    int id;
    cout << "Enter Student ID: ";
    cin >> id;

    auto it = find_if(students.begin(), students.end(),
        [id](const Student& s) { return s.getId() == id; });

    if (it == students.end()) {
        cout << "Student not found.\n";
        return;
    }

    cout << "\nCourses for " << it->getName() << ":\n";
    it->displayCourses();
}
void StudentManager::sortByGPA() {
    if (students.empty()) {
        cout << "No students to sort.\n";
        return;
    }

    // sort() needs a comparator — a function that says "which comes first?"
    sort(students.begin(), students.end(),
        [](const Student& a, const Student& b) {
            return a.getGpa() > b.getGpa();  // '>' means highest GPA first
        });

    cout << "Students sorted by GPA (highest first):\n";
    displayAll();
}
