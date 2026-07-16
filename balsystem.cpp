#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    // Private data member: cannot be accessed directly from outside the class
    double balance; 

public:
    string accountHolder;

    // Constructor: initializes the object with holder's name and initial balance
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0; // Set balance to 0 if an invalid negative value is provided
        }
    }

    // Getter Method: provides safe, read-only access to the private balance variable
    double getBalance() {
        return balance;
    }

    // Setter/Member Method: safely modifies the balance after validating the input
    void deposit(double amount) {
        if (amount > 0) {
            balance = balance + amount;
            cout << amount << " rupees deposited successfully!" << endl;
        } else {
            cout << "Invalid amount! Please enter a positive value." << endl;
        }
    }
};

int main() {
    // Creating an object of BankAccount using the constructor
    BankAccount account1("Rahul", 1000);

    // This will cause a compilation error because 'balance' is private:
    // account1.balance = 50000; 

    // Depositing money safely using the public method
    account1.deposit(500); 
    
    // Accessing the private balance using the public getter method
    cout << account1.accountHolder << "'s Balance: " << account1.getBalance() << " rupees." << endl;

    return 0;
}