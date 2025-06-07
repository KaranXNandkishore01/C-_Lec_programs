// Datatypes is dfined as a class that contains various data types.
#include <iostream>
using namespace std;
// DataTypes class
class DataTypes {
public:
    // Function to demonstrate various data types
    void demonstrateDataTypes() {
        int integerVar = 42;          // Integer type
        float floatVar = 3.14f;      // Floating-point type
        double doubleVar = 2.71828;  // Double precision floating-point type
        char charVar = 'C';           // Character type
        bool boolVar = true;          // Boolean type

        // Output the values of the variables
        cout << "Integer: " << integerVar << endl;
        cout << "Float: " << floatVar << endl;
        cout << "Double: " << doubleVar << endl;
        cout << "Character: " << charVar << endl;
        cout << "Boolean: " << boolVar << endl;
    }
};

int main() {
    DataTypes dataTypes;
    dataTypes.demonstrateDataTypes();
    return 0;
}
// This code defines a class DataTypes that demonstrates various data types in C++.
// The main function creates an instance of DataTypes and calls the demonstrateDataTypes method to display the values of different data types.