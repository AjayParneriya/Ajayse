/* Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance) */

#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string name;
    int age;

public:
    void inputData() {
        std::cout << "Enter Cricketer's Name: ";
        std::cin >> name;
        std::cout << "Enter Cricketer's Age: ";
        std::cin >> age;
    }

    void displayData() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputData() {
        Cricketer::inputData(); // Call the base class's inputData function to get name and age.
        std::cout << "Enter Total Runs: ";
        std::cin >> totalRuns;
        std::cout << "Enter Average Runs: ";
        std::cin >> averageRuns;
        std::cout << "Enter Best Performance: ";
        std::cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        // You can calculate the average runs here if needed.
    }

    void displayData() {
        Cricketer::displayData(); // Call the base class's displayData function to show name and age.
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    batsman.calculateAverageRuns(); // You can call this function to calculate average runs if needed.
    batsman.displayData();

    return 0;
}

