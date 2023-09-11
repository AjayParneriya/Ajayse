/* Write a program of Addition, Subtraction, Division, Multiplication using
constructor. */

#include <iostream>

class Calculator {
public:
    Calculator(double num1, double num2) {
        this->num1 = num1;
        this->num2 = num2;
    }

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0.0;
        }
    }

private:
    double num1;
    double num2;
};

int main() {
    double num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    Calculator calculator(num1, num2);

    std::cout << "Addition: " << calculator.add() << std::endl;
    std::cout << "Subtraction: " << calculator.subtract() << std::endl;
    std::cout << "Multiplication: " << calculator.multiply() << std::endl;
    std::cout << "Division: " << calculator.divide() << std::endl;

    return 0;
}

