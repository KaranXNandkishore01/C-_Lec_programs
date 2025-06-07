// Strings (Basic operations and string class)
#include <iostream>
#include <string>
using namespace std;
// StringOperations class
class StringOperations {
public:
    // Function to demonstrate basic string operations
    void demonstrateStringOperations() {
        string str1 = "Hello";
        string str2 = "World";
        string result;

        // Concatenation
        result = str1 + " " + str2;
        cout << "Concatenation: " << result << endl;

        // Length
        cout << "Length of str1: " << str1.length() << endl;

        // Substring
        cout << "Substring of str1: " << str1.substr(1, 3) << endl;

        // Find
        size_t pos = str1.find("lo");
        if (pos != string::npos) {
            cout << "'lo' found at position: " << pos << endl;
        }
    }
};

int main() {
    StringOperations so;
    so.demonstrateStringOperations();
    return 0;
}