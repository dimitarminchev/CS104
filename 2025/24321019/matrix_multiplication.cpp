#include <iostream>
using namespace std;

int main() {
    const int rows = 2, cols = 3;
    int matrix[rows][cols] = { {1, 2, 3}, {4, 5, 6} }; // predefined matrix - 2 layered
    int scalar;

    cout << "Enter a scalar: ";
    cin >> scalar; // read scalar multiplier

    cout << "Result:\n";

    // Multiply each matrix element by scalar and print result
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] * scalar << " ";
        }
        cout << endl;
    }

    return 0;
}
