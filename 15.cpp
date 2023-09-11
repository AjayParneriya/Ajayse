/* Write a program to swap the two numbers using friend function without
using third variable */

#include <iostream>

class SwapNumbers {
private:
    int num1, num2;

public:
    SwapNumbers(int a, int b) : num1(a), num2(b) {}

    // Declaration of the friend function
    friend void swapNumbers(SwapNumbers &s);

    void display() {
        std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    }
};

// Definition of the friend function to swap the numbers
void swapNumbers(SwapNumbers &s) {
    s.num1 = s.num1 + s.num2;
    s.num2 = s.num1 - s.num2;
    s.num1 = s.num1 - s.num2;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    SwapNumbers sn(a, b);
    
    std::cout << "Before swapping: num1 = " << a << ", num2 = " << b << std::endl;
    swapNumbers(sn); // Call the friend function to swap
    sn.display();

    return 0;
}

