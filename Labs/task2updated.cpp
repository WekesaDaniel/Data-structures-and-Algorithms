/*Task two (2) 
Given that a student has the following details: 
    i. registration number (a string of at most 20 characters) 
    ii. name (A string of at most 50 characters) 
    iii. age (and integer) 
    iv. course (An object of a defined type course) 
    v. grades (An object of a defined type Grade) 
A course has two major attributes namely: 
    i) course_code: a string. 
    ii) Course_name: a string 
A grade has the following components: 
    i) Mark: an integer between 0 and 100. 
    ii) the_grade: a character obtained from the mark through a grading system (if mark>69 
    the_grade is A, if mark>59 but less than 70, the grade is B, if mark>49 but less than 60 
    the grade is C, if mark>39 but less than 50 then grade is D otherwise grade is E ) 
Using arrays and structures (structs), design this system and implement in C/C++ and be able to: 
    i) Add at most 40 students. 
    ii) Edit a student’s details 
    iii) Add marks and calculate grades. 
    iv) Ensure the grades, ones calculated, can not be altered.*/

#include <iostream>
#include <string>
using namespace std;

// Class to represent a Course
class Course {
public:
    string course_code;
    string course_name;

    // Constructor
    Course(const string& code = "", const string& name = "") : course_code(code), course_name(name) {}
};

// Class to represent a Grade
class Grade {
private:
    int mark;
    char the_grade;

public:
    // Default constructor
    Grade() {}

    // Constructor
    Grade(int m) : mark(m) {
        calculateGrade();
    }

    // Method to get the mark
    int getMark() const {
        return mark;
    }

    // Method to get the grade
    char getGrade() const {
        return the_grade;
    }

private:
    // Method to calculate the grade based on the mark
    void calculateGrade() {
        if (mark > 69)
            the_grade = 'A';
        else if (mark > 59)
            the_grade = 'B';
        else if (mark > 49)
            the_grade = 'C';
        else if (mark > 39)
            the_grade = 'D';
        else
            the_grade = 'E';
    }
};

// Class to represent a Student
class Student {
public:
    string reg_number;
    string name;
    int age;
    Course course;
    Grade grade;

    // Default constructor
    Student() {}

    // Constructor
    Student(const string& reg, const string& n, int a, const Course& c, int mark) 
            : reg_number(reg), name(n), age(a), course(c), grade(mark) {}

    // Method to display student details
    void displayDetails() {
        cout << "Registration Number: " << reg_number << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course Code: " << course.course_code << endl;
        cout << "Course Name: " << course.course_name << endl;
        cout << "Grade: " << grade.getGrade() << endl;
    }
};

int main() {
    const int MAX_STUDENTS = 50; // Maximum number of students
    Student students[MAX_STUDENTS]; // Array to store students

    // Prompt the user to enter the number of students
    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;

    // Loop to input details for each student
    for (int i = 0; i < num_students; ++i) {
        cout << "\nEnter details for student " << i + 1 << ":\n";

        cout << "Registration Number: ";
        cin >> students[i].reg_number;

        cout << "Name: ";
        cin.ignore(); // Ignore the newline character in the buffer
        getline(cin, students[i].name);

        cout << "Age: ";
        cin >> students[i].age;

        cout << "Course Code: ";
        cin >> students[i].course.course_code;

        cout << "Course Name: ";
        cin.ignore(); // Ignore the newline character in the buffer
        getline(cin, students[i].course.course_name);

        int mark;
        cout << "Mark: ";
        cin >> mark;

        // Create a Student object with the entered details
        students[i].grade = Grade(mark); // Grade calculation happens internally
    }

    // Display details of all students
    cout << "\nDetails of all students:\n";
    for (int i = 0; i < num_students; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].displayDetails();
    }

    return 0;
}
