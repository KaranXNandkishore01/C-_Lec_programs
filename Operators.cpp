// Operators (Arithmetic, Relational, Logical, Assignment, etc.) one by one
#include <iostream>
using namespace std;
// Operators class
class Operators {
public:
    // Function to demonstrate arithmetic operators
    void demonstrateArithmeticOperators() {
        int a = 10, b = 5;
        cout << "Arithmetic Operators:" << endl;
        cout << "Addition: " << (a + b) << endl;          // Addition
        cout << "Subtraction: " << (a - b) << endl;       // Subtraction
        cout << "Multiplication: " << (a * b) << endl;    // Multiplication
        cout << "Division: " << (a / b) << endl;          // Division
        cout << "Modulus: " << (a % b) << endl;           // Modulus
    }

    // Function to demonstrate relational operators
    void demonstrateRelationalOperators() {
        int x = 10, y = 20;
        cout << "\nRelational Operators:" << endl;
        cout << "Equal to: " << (x == y) << endl;          // Equal to
        cout << "Not equal to: " << (x != y) << endl;     // Not equal to
        cout << "Greater than: " << (x > y) << endl;      // Greater than
        cout << "Less than: " << (x < y) << endl;         // Less than
        cout << "Greater than or equal to: " << (x >= y) << endl; // Greater than or equal to
        cout << "Less than or equal to: " << (x <= y) << endl;    // Less than or equal to
    }

    // Function to demonstrate logical operators
    void demonstrateLogicalOperators() {
        bool p = true, q = false;
        cout << "\nLogical Operators:" << endl;
        cout << "Logical AND: " << (p && q) << endl;      // Logical AND
        cout << "Logical OR: "  << (p || q) << endl;      // Logical OR
        cout << "Logical NOT: "  << (!p)  << endl;         // Logical NOT
    }

    // Function to demonstrate assignment operators
    void demonstrateAssignmentOperators() {
        int z = 10;
        cout << "\nAssignment Operators:" << endl;
        z += 5;  // z = z + 5
        cout << "Add and assign: "   << z << endl;
        z -= 3;  // z = z - 3
        cout << "Subtract and assign: " << z << endl;
        z *= 2;  // z = z * 2
        cout << "Multiply and assign: " << z << endl;
        z /= 4;  // z = z / 4
        cout << "Divide and assign: " << z << endl;
        z %= 3;  // z = z % 3
        cout << "Modulus and assign: " << z << endl;
    }
};

int main() {
    Operators op;
    op.demonstrateArithmeticOperators();
    op.demonstrateRelationalOperators();
    op.demonstrateLogicalOperators();
    op.demonstrateAssignmentOperators();
    return 0;
}