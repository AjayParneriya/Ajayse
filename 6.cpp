/* Write a program to find the multiplication values and the cubic values using
inline function */

#include <iostream>

// Define an inline function to find the multiplication of two numbers
inline double multiply(double a, double b) {
    return a * b;
}

// Define an inline function to find the cubic value of a number
inline double cubic(double x) {
    return x * x * x;
}

int main() {
    double num1, num2;

    // Input two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Calculate and display the multiplication result
    double multiplicationResult = multiply(num1, num2);
    std::cout << "Multiplication Result: " << multiplicationResult << std::endl;

    // Calculate and display the cubic value
    double cubicValue1 = cubic(num1);
    double cubicValue2 = cubic(num2);

    std::cout << "Cubic Value of " << num1 << ": " << cubicValue1 << std::endl;
    std::cout << "Cubic Value of " << num2 << ": " << cubicValue2 << std::endl;

    return 0;
}

