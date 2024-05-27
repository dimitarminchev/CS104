#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int stot = num / 100;
    int des = (num / 10) % 10;
    int ed = num % 10;

    int product = stot * des * ed;
    if (product >= 100 && product <= 999) {
        cout << "YES " << product << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
