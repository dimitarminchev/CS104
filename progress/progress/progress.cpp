#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int count = 0;

    for (int num = m; num <= n; num++) {
        int a = num / 100;
        int b = (num / 10) % 10;
        int c = num % 10;
        
        if ((a + c == 2 * b) && (a != b && b != c && a != c)) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
