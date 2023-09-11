/* Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the marks
obtained in two subjects and class result contains the total marks obtained in
the test. The class result can inherit the details of the marks obtained in the
test and roll number of students. (Multilevel Inheritance) */

#include <iostream>

// Class for storing student information (Roll Number)
class Student {
protected:
    int rollNumber;

public:
    Student(int roll) : rollNumber(roll) {
    }

    void displayStudentInfo() {
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

// Class for storing test marks (Marks in two subjects)
class Test : public Student {
protected:
    int subject1Marks;
    int subject2Marks;

public:
    Test(int roll, int marks1, int marks2) : Student(roll), subject1Marks(marks1), subject2Marks(marks2) {
    }

    void displayTestMarks() {
        std::cout << "Marks in Subject 1: " << subject1Marks << std::endl;
        std::cout << "Marks in Subject 2: " << subject2Marks << std::endl;
    }
};

// Class for storing result (Total Marks)
class Result : public Test {
protected:
    int totalMarks;

public:
    Result(int roll, int marks1, int marks2) : Test(roll, marks1, marks2), totalMarks(marks1 + marks2) {
    }

    void displayResult() {
        displayStudentInfo(); // Inherited from Student
        displayTestMarks();   // Inherited from Test
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main() {
    // Create a Result object
    Result studentResult(182, 90, 85);

    // Display the student's result
    studentResult.displayResult();

    return 0;
}

