// Functions (with and without return)

#include <iostream>
using namespace std;

// Function to demonstrate a simple addition
void add(int a, int b) {
    cout << "Addition: " << (a + b) << endl;
}

// Function to demonstrate a simple subtraction
int subtract(int a, int b) {
    return a - b;
}

int main() {
    add(5, 3);
    cout << "Subtraction: " << subtract(5, 3) << endl;
    return 0;
}