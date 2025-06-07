// Conditional Statements (if, else, else if, switch)

#include <iostream>
using namespace std;
// ConditionalStatements class
class ConditionalStatements {
public:
    // Function to demonstrate if-else statements
    void demonstrateIfElse() {
        int a = 10, b = 20;
        cout << "If-Else Statement:" << endl;
        if (a > b) {
            cout << "A is greater than B" << endl;
        } else {
            cout << "A is not greater than B" << endl;
        }
    }

    // Function to demonstrate else if statements
    void demonstrateElseIf() {
        int a = 10, b = 20, c = 30;
        cout << "\nElse If Statement:" << endl;
        if (a > b && a > c) {
            cout << "A is the greatest" << endl;
        } else if (b > c) {
            cout << "B is the greatest" << endl;
        } else {
            cout << "C is the greatest" << endl;
        }
    }

    // Function to demonstrate switch statements
    void demonstrateSwitch(int day) {
        cout << "\nSwitch Statement:" << endl;
        switch (day) {
            case 1:
                cout << "Monday" << endl;
                break;
            case 2:
                cout << "Tuesday" << endl;
                break;
            case 3:
                cout << "Wednesday" << endl;
                break;
            default:
                cout << "Invalid day" << endl;
        }
    }
};

int main() {
    ConditionalStatements cs;
    cs.demonstrateIfElse();
    cs.demonstrateElseIf();
    cs.demonstrateSwitch(2);
    return 0;
}