// Explain and Write a program for Constructors and Destructors
// Constructors and Destructors are special member functions in C++ that are used to initialize and clean up objects, respectively.
#include <iostream>
using namespace std;
// Class definition
class Sample {
public:
    // Constructor
    Sample() {
        cout << "Constructor called: Object created." << endl;
    }

    // Destructor
    ~Sample() {
        cout << "Destructor called: Object destroyed." << endl;
    }

    // Method to display a message
    void displayMessage() {
        cout << "Hello from Sample class!" << endl;
    }
};
int main() {
    // Creating an object of Sample class
    Sample obj;

    // Calling a method of Sample class
    obj.displayMessage();

    // The destructor will be called automatically when the object goes out of scope
    return 0;
}
