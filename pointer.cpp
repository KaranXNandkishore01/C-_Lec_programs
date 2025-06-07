// Pointers (Basics and Pointer Arithmetic)
#include <iostream>
using namespace std;
// PointerOperations class
class PointerOperations {
public:
    // Function to demonstrate basic pointer operations
    void demonstratePointerBasics() {
        int var = 42;                // An integer variable
        int* ptr = &var;            // Pointer to the variable

        cout << "Value of var: " << var << endl;          // Output the value of var
        cout << "Address of var: " << &var << endl;       // Output the address of var
        cout << "Value pointed by ptr: " << *ptr << endl; // Output the value pointed by ptr
        cout << "Address stored in ptr: " << ptr << endl; // Output the address stored in ptr
    }

    // Function to demonstrate pointer arithmetic
    void demonstratePointerArithmetic() {
        int arr[] = {10, 20, 30, 40, 50}; // An array of integers
        int* ptr = arr;                   // Pointer to the first element of the array

        cout << "Array elements using pointer arithmetic:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << *(ptr + i) << " ";    // Accessing array elements using pointer arithmetic
        }
        cout << endl;
    }
};