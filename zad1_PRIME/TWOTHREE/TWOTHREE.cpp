#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    if (n < 2 || n > 33333) return 0;

    // If divisible by both 2 and 3, divide by 2 (tie-break).
    vector<int> seq;
    int ops = 0;
    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else if (n % 3 == 0) {
            n /= 3;
        }
        else {
            ++n;
        }
        seq.push_back(n);
        ++ops;
    }

    for (size_t i = 0; i < seq.size(); ++i) {
        if (i) cout << ' ';
        cout << seq[i];
    }
    cout << '\n' << ops << '\n';
    return 0;
}