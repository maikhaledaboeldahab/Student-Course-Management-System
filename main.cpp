#include<iostream>
#include"StudentManeger.h"

using namespace std;


void showMenu() {
    cout << "\n===== Student Management System =====\n";
    cout << "1. Add Student\n";
    cout << "2. Remove Student\n";
    cout << "3. Search Student\n";
    cout << "4. Display All Students\n";
    cout << "5. Enroll Student in Course\n";
    cout << "6. Show Student Courses\n";
    cout << "7. Sort Students by GPA\n";
    cout << "8. Exit\n";
    cout << "=====================================\n";
    cout << "Choice: ";
}


int main() {
    StudentManager manager;  // one object controls everything
    int choice;

    do {
        showMenu();

        // input validation for menu choice
        while (!(cin >> choice) || choice < 1 || choice > 8) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid choice! Enter a number (1-8): ";
        }

        switch (choice) {
        case 1: manager.addStudent();     break;
        case 2: manager.removeStudent();  break;
        case 3: manager.searchStudent();  break;
        case 4: manager.displayAll();     break;
        case 5: manager.enrollInCourse(); break;
        case 6: manager.showCourses();    break;
        case 7: manager.sortByGPA();      break;
        case 8: cout << "Goodbye!\n";     break;
        default: cout << "Invalid choice.\n";
        }

    } while (choice != 8);  // keep looping until user picks Exit

    return 0;
}