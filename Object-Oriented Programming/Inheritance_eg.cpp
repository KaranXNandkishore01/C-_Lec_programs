//Explain the types of Inheritance. and WAP for each type of inheritance.
// Inheritance is a fundamental concept in OOP that allows a class (derived class) to inherit project properties and behaviors from another class (base class).
// There are several types of inheritance in C++:
// 1. Single Inheritance: A derived class inherits from a single base class.
// 2. Multiple Inheritance: A derived class inherits from multiple base classes.
// 3. Hierarchical Inheritance: Multiple derived classes inherit from a single base class.
// 4. Multilevel Inheritance: A derived class inherits from another derived class.
// 5. Hybrid Inheritance: A combination of two or more types of inheritance, which can include multiple and hierarchical inheritance.


#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

// 01 Single Inheritance
// Main function
int main() {
    Dog dog;
    dog.eat(); // Calling base class method
    dog.bark(); // Calling derived class method
    return 0;
}
// This code demonstrates single inheritance where Dog is derived from Animal.

// 02 Multiple Inheritance
class Bird : public Animal {
public:
    void fly() {
        cout << "Bird flies in the sky." << endl;
    }
};

// Main function
int main() {
    Dog dog;
    dog.eat(); // Calling base class method
    dog.bark(); // Calling derived class method

    Bird bird;
    bird.eat(); // Calling base class method
    bird.fly(); // Calling derived class method

    return 0;
}
// This code demonstrates multiple inheritance where Bird is derived from Animal.

// 03 Hierarchical Inheritance
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows." << endl;
    }
};
// Main function
int main() {
    Dog dog;
    dog.eat(); // Calling base class method
    dog.bark(); // Calling derived class method

    Bird bird;
    bird.eat(); // Calling base class method
    bird.fly(); // Calling derived class method

    Cat cat;
    cat.eat(); // Calling base class method
    cat.meow(); // Calling derived class method

    return 0;
}
// This code demonstrates hierarchical inheritance where Cat is derived from Animal.

// 04 Multilevel Inheritance
class Puppy : public Dog {
public:
    void play() {
        cout << "Puppy plays with a ball." << endl;
    }
};
// Main function
int main() {
    Puppy puppy;
    puppy.eat(); // Calling base class method
    puppy.bark(); // Calling derived class method
    puppy.play(); // Calling derived class method
    return 0;
}
// This code demonstrates multilevel inheritance where Puppy is derived from Dog, which in turn is derived from Animal.

// 05 Hybrid Inheritance
class Fish : public Animal {
public:
    void swim() {
        cout << "Fish swims in water." << endl;
    }
};
// Main function
int main() {
    Fish fish;
    fish.eat(); // Calling base class method
    fish.swim(); // Calling derived class method
    return 0;
}
// This code demonstrates hybrid inheritance where Fish is derived from Animal.

// Note: In C++, hybrid inheritance can be achieved by combining multiple inheritance and hierarchical inheritance.
// However, care should be taken to avoid ambiguity and ensure proper design.
// In this example, we have shown different types of inheritance in C++ with simple class structures.
