//26.
#include <iostream>
using namespace std;

int powerOfTwo(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return 2 * powerOfTwo(n - 1);
    }
}

int main() {
    int n;
    cout << "Въведете число: "; 
    cin >> n; 

    if (n < 0) {
        cout << "Моля, въведете неотрицателно число." << endl;
        return 1; 
    }

    cout << "Степен на двойката до " << n << " е: " << powerOfTwo(n) << endl;

    return 0;
}
