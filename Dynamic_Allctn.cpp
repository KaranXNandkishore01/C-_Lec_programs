// Dynamic Memory Allocation (new, delete)
#include <iostream>
using namespace std;

// Function to demonstrate dynamic memory allocation
void demonstrateDynamicMemoryAllocation() {
    int* arr = new int[5]; // Allocate memory for an array of 5 integers

    // Initialize and display the array elements
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
        cout << "Element " << i << ": " << arr[i] << endl;
    }

    delete[] arr; // Deallocate the memory
}

int main() {
    demonstrateDynamicMemoryAllocation();
    return 0;
}