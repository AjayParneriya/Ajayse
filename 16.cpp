/* Write a program to find the max number from given two numbers using
friend function */

#include <iostream>

class MaxFinder {
public:
    MaxFinder(int a, int b) : num1(a), num2(b) {}

    friend int findMax(MaxFinder obj);

private:
    int num1;
    int num2;
};

int findMax(MaxFinder obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    MaxFinder maxFinder(num1, num2);

    int max = findMax(maxFinder);

    std::cout << "The maximum number is: " << max << std::endl;

    return 0;
}

