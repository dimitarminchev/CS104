#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int amount = 0;

    while (N > 1) {
        if (N % 2 == 0) {
            N /= 2;
        }
        else if (N % 3 == 0) {
            N /= 3;
        }
        else {
            N += 1;
        }

        cout << N << " ";
        amount++;
    }

    cout << endl << amount << endl;

    return 0;
}
