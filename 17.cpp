// Write a program of to swap the two values using templates

#include <iostream>

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;

    // Call the swapValues template function
    swapValues(x, y);

    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    return 0;
}

