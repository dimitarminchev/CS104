#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    for (int i = start; i <= end; i++) {
        if (i < 2) continue;

        int div = 0;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                div++;
                break;
            }
        }

        if (div == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
