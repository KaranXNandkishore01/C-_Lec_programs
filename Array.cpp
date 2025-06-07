// Arrays (1D and 2D)
#include <iostream>
using namespace std;

// Function to demonstrate 1D array
void demonstrate1DArray() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "1D Array Elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to demonstrate 2D array
void demonstrate2DArray() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "2D Array Elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    demonstrate1DArray();
    demonstrate2DArray();
    return 0;
}