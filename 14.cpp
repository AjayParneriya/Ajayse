/* Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading */

#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265359;

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height, char shape) {
    if (shape == 't' || shape == 'T') {
        return 0.5 * base * height;
    } else {
        cout << "Invalid shape type." << endl;
        return 0.0;
    }
}

int main() {
    char shapeType;
    cout << "Enter the shape type (C for Circle, R for Rectangle, T for Triangle): ";
    cin >> shapeType;

    if (shapeType == 'C' || shapeType == 'c') {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        double area = calculateArea(radius);
        cout << "Area of the circle: " << area << endl;
    } else if (shapeType == 'R' || shapeType == 'r') {
        double length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        double area = calculateArea(length, width);
        cout << "Area of the rectangle: " << area << endl;
    } else if (shapeType == 'T' || shapeType == 't') {
        double base, height;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        double area = calculateArea(base, height, 't');
        cout << "Area of the triangle: " << area << endl;
    } else {
        cout << "Invalid shape type." << endl;
    }

    return 0;
}

