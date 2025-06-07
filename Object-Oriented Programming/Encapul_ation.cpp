// Encapsulation and Abstraction
#include <iostream>
using namespace std;
// Class definition for BankAccount
class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Getter for account number
    string getAccountNumber() const {
        return accountNumber;
    }

    // Getter for balance
    double getBalance() const {
        return balance;
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }
};
// Main function to demonstrate encapsulation
int main() {
    BankAccount account("123456789", 1000.0); // Create a BankAccount object

    cout << "Account Number: " << account.getAccountNumber() << endl; // Access account number
    cout << "Initial Balance: " << account.getBalance() << endl; // Access initial balance

    account.deposit(500.0); // Deposit money
    cout << "Balance after deposit: " << account.getBalance() << endl; // Check balance

    account.withdraw(200.0); // Withdraw money
    cout << "Balance after withdrawal: " << account.getBalance() << endl; // Check balance

    return 0;
}