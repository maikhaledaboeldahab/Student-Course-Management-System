# Student Course Management System

A C++ console application for managing students and their enrolled courses.
Built as an individual assignment applying OOP, STL containers, and STL algorithms.

---

## Table of Contents

- [About](#about)
- [Features](#features)
- [Requirements](#requirements)
- [How to Compile and Run](#how-to-compile-and-run)
- [Usage](#usage)
- [Project Structure](#project-structure)
- [Author](#author)

---

## About

The Student Course Management System is a menu-driven console application that allows
users to add, remove, search, and manage students and their course enrollments.

Key concepts applied:
- **OOP** — Inheritance (`Person` → `Student`), encapsulation, constructors
- **STL Containers** — `vector<Student>`, `set<string>`
- **STL Algorithms** — `find_if()`, `sort()` with lambda expressions
- **Input Validation** — Handles invalid types and out-of-range values

---

## Features

| # | Feature | Description |
|---|---------|-------------|
| 1 | Add Student | Register a student with unique ID, name, and GPA (0.0–4.0) |
| 2 | Remove Student | Delete a student record by ID |
| 3 | Search Student | Find and display a student's details by ID |
| 4 | Display All Students | List all registered students |
| 5 | Enroll in Course | Add a course to a student (no duplicates allowed) |
| 6 | Show Student Courses | Display all courses for a specific student |
| 7 | Sort by GPA | Sort all students from highest to lowest GPA |
| 8 | Exit | Safely close the program |

---

## Requirements

| Requirement | Details |
|-------------|---------|
| Language | C++17 or later |
| Compiler | g++ (GCC), clang++, or MSVC |
| OS | Windows / Linux / macOS |
| Dependencies | None — standard library only |

---

## How to Compile and Run

### Linux / macOS

```bash
# Compile
g++ -std=c++17 main.cpp StudentManager.cpp -o StudentCMS

# Run
./StudentCMS
```

### Windows (Command Prompt)

```cmd
g++ -std=c++17 main.cpp StudentManager.cpp -o StudentCMS.exe
StudentCMS.exe
```

### Windows (PowerShell)

```powershell
g++ -std=c++17 main.cpp StudentManager.cpp -o StudentCMS.exe
.\StudentCMS.exe
```

> **Note:** Make sure `g++` is installed and added to your system PATH.
> You can download it via [MinGW-w64](https://www.mingw-w64.org/) on Windows
> or install with `sudo apt install g++` on Ubuntu/Debian.

---

## Usage

Once the program runs, you will see:

```
===== Student Management System =====
1. Add Student
2. Remove Student
3. Search Student
4. Display All Students
5. Enroll Student in Course
6. Show Student Courses
7. Sort Students by GPA
8. Exit
=====================================
Choice:
```

### Example — Adding a Student

```
Choice: 1
Enter Student ID: 1001
Enter Name: Mai Khaled
Enter GPA (0.0 - 4.0): 3.8
Student added successfully.
```

### Example — Enrolling in a Course

```
Choice: 5
Enter Student ID: 1001
Enter Course Name: Data Structures
Enrolled in Data Structures successfully.
```

### Example — Sort by GPA

```
Choice: 7
Students sorted by GPA (highest first):
ID: 1001 | Name: Mai Khaled  | GPA: 3.8
ID: 1002 | Name: Omar Saeed  | GPA: 3.1
```

---

## Project Structure

```
StudentCMS/
│
├── main.cpp              # Entry point — menu loop
├── Person.h              # Base class (protected name)
├── Student.h             # Derived class (id, gpa, courses)
├── StudentManager.h      # Controller class declaration
├── StudentManager.cpp    # Controller method implementations
└── README.md             # This file
```

---

## Author

| Field | Info |
|-------|------|
| Name | Mai Khaled |
| Military ID | 12250 |
| Course | C++ Programming |
| Assignment | C++ Project |
| Instructor | Eng. Mostafa Ashraf |
