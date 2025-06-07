// Structures
#include <iostream>
using namespace std;
// Structure to represent a point in 2D space
struct Point {
    int x; // x-coordinate
    int y; // y-coordinate

    // Function to display the point
    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};
// Function to demonstrate structure usage
void demonstrateStructure() {
    Point p1; // Declare a point
    p1.x = 10; // Set x-coordinate
    p1.y = 20; // Set y-coordinate
    p1.display(); // Display the point
}
// Function to demonstrate structure with a function
void demonstrateStructureWithFunction() {
    Point p2; // Declare another point
    p2.x = 30; // Set x-coordinate
    p2.y = 40; // Set y-coordinate
    p2.display(); // Display the point
}
// Main function
int main() {
    demonstrateStructure(); // Call function to demonstrate structure
    demonstrateStructureWithFunction(); // Call function to demonstrate structure with a function
    return 0; // Return success
}