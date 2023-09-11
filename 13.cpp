// Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <string>

class MyString {
private:
    std::string str;

public:
    MyString(const std::string& s) : str(s) {}

    MyString operator+(const MyString& other) {
        return MyString(str + other.str);
    }

    void display() {
        std::cout << str << std::endl;
    }
};

int main() {
    MyString s1("Dj, ");
    MyString s2("Ajay!");

    MyString result = s1 + s2;

    result.display();

    return 0;
}

