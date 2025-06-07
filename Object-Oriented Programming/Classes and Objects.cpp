// Explain and Write a program for Classes and Objects
// Classes and Objects are fundamental concepts in Object-Oriented Programming (OOP).
// A class is a blueprint for creating objects, which are instances of the class.
#include <iostream>
using namespace std;

// Class definition
class Car {
public:
    // Attributes
    string brand;
    string model;
    int year;

    // Method to display car details
    void displayInfo() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Car Year: " << year << endl;
    }
};

int main() {
    // Creating an object of the Car class
    Car myCar;

    // Setting attributes
    myCar.brand = "Toyota";
    myCar.model = "Camry";
    myCar.year = 2020;

    // Displaying car details
    myCar.displayInfo();

    return 0;
}