// Polymorphism (Function Overloading, Overriding)
// Here, i am  write about the Polymorphism: It is a core concept in oops that allows functions or methods to operate in different ways based on the object or data type they are applied to. In C++, polymorphism can be achieved through function overloading and function overriding.
// Function overloading allows multiple functions with the same name but different parameters, while function overriding allows a derived class to provide a specific implementation of a base class method.
// ----------------------------------------------------------------------````````------------------------------------------------------

#include <iostream>
using namespace std;
// Base class
class Shape {
public:
    // Virtual function for area
    virtual void area() {
        cout << "Calculating area of a generic shape." << endl;
    }
};
// Derived class for Circle
class Circle : public Shape {
public:
    // Overriding area function
    void area() override {
        cout << "Calculating area of a Circle." << endl;
    }
};
// Derived class for Rectangle
class Rectangle : public Shape {
public:
    // Overriding area function
    void area() override {
        cout << "Calculating area of a Rectangle." << endl;
    }
};
// Function to demonstrate polymorphism
void demonstratePolymorphism(Shape* shape) {
    shape->area(); // Calls the appropriate area function based on the object type
}
int main() {
    Shape* shape1 = new Circle();     // Create a Circle object
    Shape* shape2 = new Rectangle();  // Create a Rectangle object

    demonstratePolymorphism(shape1);  // Calls Circle's area function
    demonstratePolymorphism(shape2);  // Calls Rectangle's area function

    delete shape1; // Clean up memory
    delete shape2; // Clean up memory

    return 0;
}
