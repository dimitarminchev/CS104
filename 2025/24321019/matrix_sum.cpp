#include <iostream>
using namespace std;

int main() {
    const int rows = 2, cols = 2;
    int a[rows][cols] = { {1, 2}, {3, 4} }; // first matrix // 2d array
    int b[rows][cols] = { {5, 6}, {7, 8} }; // second matrix
    int sum[rows][cols]; // to store sums // 2d array to store sum

    cout << "Sum of matrices:\n";

    // Add corresponding elements of matrices a and b
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " "; // print sum element
        }
        cout << endl;
    }

    return 0;
}
