#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int count = 0;

    for (int num = A; num <= B; num++) {
        int a = (num / 10000) % 10;
        int b = (num / 1000) % 10;
        int c = (num / 100) % 10;
        int d = (num / 10) % 10;
        int e = num % 10;
            
        if (a + b == c && c == d + e) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
