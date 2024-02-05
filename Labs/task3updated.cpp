/*Task Three (3) 
Use C++ classes to represent the scenario above*/

#include <iostream>
#include <string>
using namespace std;

// Class to represent a Course
class Course {
public:
    string course_code;
    string course_name;

    // Constructor
    Course(const string& code, const string& name) : course_code(code), course_name(name) {}
};

// Class to represent a Grade
class Grade {
private:
    int mark;
    char the_grade;

public:
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
private:
    string reg_number;
    string name;
    int age;
    Course course;
    Grade grade;

public:
    // Constructor
    Student(const string& reg, const string& n, int a, const Course& c, int mark) 
            : reg_number(reg), name(n), age(a), course(c), grade(mark) {}

    // Method to display student details
    void displayDetails() const {
        cout << "Registration Number: " << reg_number << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course Code: " << course.course_code << endl;
        cout << "Course Name: " << course.course_name << endl;
        cout << "Mark: " << grade.getMark() << endl;
        cout << "Grade: " << grade.getGrade() << endl;
    }
};

int main() {
    // Prompt the user to enter student details
    string reg, name, code, course_name;
    int age, mark;

    cout << "Enter registration number: ";
    cin >> reg;
    cout << "Enter name: ";
    cin.ignore(); // Ignore the newline character in the buffer
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter course code: ";
    cin >> code;
    cout << "Enter course name: ";
    cin.ignore(); // Ignore the newline character in the buffer
    getline(cin, course_name);
    cout << "Enter mark: ";
    cin >> mark;

    // Create a Course object
    Course course(code, course_name);

    // Create a Student object with the entered details
    Student student(reg, name, age, course, mark);

    // Display the details of the student
    cout << "\nStudent details:\n";
    student.displayDetails();

    return 0;
}





