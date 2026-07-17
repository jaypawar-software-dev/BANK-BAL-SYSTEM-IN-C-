#include <iostream>
using namespace std;

// Parent Class (Base Class)
class Vehicle {
public:
    void horn() {
        cout << "Peep-Peep! 🎺" << endl;
    }
    void start() {
        cout << "Vehicle is starting..." << endl;
    }
};

// Child Class (Derived Class) inherits from Vehicle
class SportsCar : public Vehicle {
public:
    // Function Overriding: Modifying the Parent's start() behavior
    void start() {
        cout << "Sports Car starts with a loud ROAR! 🏎️" << endl;
    }
};

int main() {
    SportsCar myCar;
    myCar.horn();  // Calls inherited function from Parent class
    myCar.start(); // Calls overridden function from Child class

    return 0;
}