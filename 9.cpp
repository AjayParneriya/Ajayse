/* Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance) */

#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const std::string &n, int a) : name(n), age(a) {}

    void readPersonData() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }

    void displayPersonData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Student {
protected:
    float percentage;

public:
    Student(float p) : percentage(p) {}

    void readStudentData() {
        std::cout << "Enter percentage: ";
        std::cin >> percentage;
    }

    void displayStudentData() {
        std::cout << "Percentage: " << percentage << "%" << std::endl;
    }
};

class Teacher {
protected:
    float salary;

public:
    Teacher(float s) : salary(s) {}

    void readTeacherData() {
        std::cout << "Enter salary: $";
        std::cin >> salary;
    }

    void displayTeacherData() {
        std::cout << "Salary: $" << salary << std::endl;
    }
};

class SchoolMember : public Person, public Student, public Teacher {
public:
    SchoolMember(const std::string &n, int a, float p, float s)
        : Person(n, a), Student(p), Teacher(s) {}

    void readData() {
        readPersonData();
        readStudentData();
        readTeacherData();
    }

    void displayData() {
        std::cout << "School Member Information" << std::endl;
        displayPersonData();
        displayStudentData();
        displayTeacherData();
    }
};

int main() {
    std::string name;
    int age;
    float percentage, salary;

    std::cout << "Enter School Member Information:" << std::endl;
    std::cout << "===============================" << std::endl;

    SchoolMember schoolMember("", 0, 0.0f, 0.0f); // Initialize with default values
    schoolMember.readData();

    std::cout << "\nSchool Member Details:" << std::endl;
    std::cout << "=======================" << std::endl;
    schoolMember.displayData();

    return 0;
}

