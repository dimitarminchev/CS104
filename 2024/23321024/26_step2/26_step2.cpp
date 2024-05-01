// Рекурсивна функия за степен на двойката до зададено число
#include <iostream>
using namespace std;
int powerOfTwo(int n) {
    if (n == 0) {
        return 1; // 2^0 = 1
    }
    else {
        return 2 * powerOfTwo(n - 1);
    }
}
int main() {
    int n;
    cout << "Vuvedete 4islo: ";
    cin >> n;
    cout << "Stepen na dvoikata do " << n << " е: " << powerOfTwo(n) << endl;
    return 0;
}