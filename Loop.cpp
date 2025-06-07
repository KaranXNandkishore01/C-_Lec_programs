// Loops (for, while, do-while)
#include <iostream>
using namespace std;

// Loops class
class Loops {
public:
    // Function to demonstrate for loop
    void demonstrateForLoop() {
        cout << "For Loop:" << endl;
        for (int i = 1; i <= 5; i++) {
            cout << "Iteration: " << i << endl;
        }
    }

    // Function to demonstrate while loop
    void demonstrateWhileLoop() {
        cout << "\nWhile Loop:" << endl;
        int i = 1;
        while (i <= 5) {
            cout << "Iteration: " << i << endl;
            i++;
        }
    }

    // Function to demonstrate do-while loop
    void demonstrateDoWhileLoop() {
        cout << "\nDo-While Loop:" << endl;
        int i = 1;
        do {
            cout << "Iteration: " << i << endl;
            i++;
        } while (i <= 5);
    }
};

int main() {
    Loops loops;
    loops.demonstrateForLoop();
    loops.demonstrateWhileLoop();
    loops.demonstrateDoWhileLoop();
    return 0;
}