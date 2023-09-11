/* Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance */

#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    int accountNumber;
    std::string accountType;
    double balance;

public:
    // Constructor to initialize data members
    BankAccount(const std::string& name, int accNumber, const std::string& type, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = type;
        balance = initialBalance;
    }

    // Member function to deposit an amount
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited $" << amount << " into account " << accountNumber << std::endl;
        } else {
            std::cout << "Invalid deposit amount. Amount must be greater than zero." << std::endl;
        }
    }

    // Member function to withdraw an amount after checking balance
    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " from account " << accountNumber << std::endl;
        } else if (amount <= 0) {
            std::cout << "Invalid withdrawal amount. Amount must be greater than zero." << std::endl;
        } else {
            std::cout << "Insufficient balance in account " << accountNumber << " to withdraw $" << amount << std::endl;
        }
    }

    // Member function to display name and balance
    void display() {
        std::cout << "Account Holder: " << depositorName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Account Balance: $" << balance << std::endl;
    }
};

int main() {
    // Example usage of the BankAccount class
    BankAccount account("Ajay Parneriya", 2805, "Savings", 1000.0);

    account.display();
    account.deposit(500.0);
    account.withdraw(200.0);
    account.display();

    return 0;
}

