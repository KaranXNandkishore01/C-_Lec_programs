// File Handling (ifstream, ofstream)
#include <iostream>
#include <fstream>
using namespace std;
// FileHandle class
class FileHandle { 
public:
    // Function to write to a file
    void writeToFile(const string& filename) {
        ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << "Hello, World!" << endl;
            outFile << "I am Learning C++" << endl;
            outFile.close();
            cout << "Data written to " << filename << endl;
        } else {
            cout << "Unable to open file for writing." << endl;
        }
    }

    // Function to read from a file
    void readFromFile(const string& filename) {
        ifstream inFile(filename);
        if (inFile.is_open()) {
            string line;
            while (getline(inFile, line)) {
                cout << line << endl;
            }
            inFile.close();
        } else {
            cout << "Unable to open file for reading." << endl;
        }
    }
}; 
// Main function to demonstrate file handling
int main() {
    FileHandle fileHandle;
    string filename = "example.txt";

    // Write to the file
    fileHandle.writeToFile(filename);

    // Read from the file
    fileHandle.readFromFile(filename);

    return 0;
}