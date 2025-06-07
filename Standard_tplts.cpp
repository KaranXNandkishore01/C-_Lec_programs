// Standard Template Library (Vectors, Maps, Sets basics)
#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;
// Function to demonstrate vector operations
void demonstrateVector() {
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Vector elements: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;
}
// Function to demonstrate map operations
void demonstrateMap() {
    map<string, int> myMap;
    myMap["Alice"] = 25;
    myMap["Bob"] = 30;
    cout << "Map elements:" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
}
// Function to demonstrate set operations
void demonstrateSet() {
    set<int> mySet = {1, 2, 3, 4, 5};
    cout << "Set elements: ";
    for (int i : mySet) {
        cout << i << " ";
    }
    cout << endl;
}
// Main function to demonstrate STL

int main() {
    cout << "Demonstrating Vector:" << endl;
    demonstrateVector();
    
    cout << "\nDemonstrating Map:" << endl;
    demonstrateMap();
    
    cout << "\nDemonstrating Set:" << endl;
    demonstrateSet();
    
    return 0;
}
