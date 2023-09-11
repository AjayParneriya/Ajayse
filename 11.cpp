/* Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading */

#include <iostream>

class Calculator {
public:
    int add(int num1, int num2) {
        return num1 + num2;
    }

    double add(double num1, double num2) {
        return num1 + num2;
    }

    int subtract(int num1, int num2) {
        return num1 - num2;
    }

    double subtract(double num1, double num2) {
        return num1 - num2;
    }

    int multiply(int num1, int num2) {
        return num1 * num2;
    }

    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    int divide(int num1, int num2) {
        if (num2 == 0) {
            std::cerr << "Error: Division by zero" << std::endl;
            return 0;
        }
        return num1 / num2;
    }

    double divide(double num1, double num2) {
        if (num2 == 0.0) {
            std::cerr << "Error: Division by zero" << std::endl;
            return 0.0;
        }
        return num1 / num2;
    }
};

int main() {
    Calculator calculator;

    // Integer operations
    int intResult = calculator.add(5, 3);
    std::cout << "Addition (int): " << intResult << std::endl;

    intResult = calculator.subtract(5, 3);
    std::cout << "Subtraction (int): " << intResult << std::endl;

    intResult = calculator.multiply(5, 3);
    std::cout << "Multiplication (int): " << intResult << std::endl;

    intResult = calculator.divide(6, 2);
    std::cout << "Division (int): " << intResult << std::endl;

    // Double operations
    double doubleResult = calculator.add(5.5, 3.3);
    std::cout << "Addition (double): " << doubleResult << std::endl;

    doubleResult = calculator.subtract(5.5, 3.3);
    std::cout << "Subtraction (double): " << doubleResult << std::endl;

    doubleResult = calculator.multiply(5.5, 3.3);
    std::cout << "Multiplication (double): " << doubleResult << std::endl;

    doubleResult = calculator.divide(6.6, 2.2);
    std::cout << "Division (double): " << doubleResult << std::endl;

    return 0;
}

