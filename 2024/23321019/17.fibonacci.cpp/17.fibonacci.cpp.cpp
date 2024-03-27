//Редицата на фибоначи до зададено число
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 0, b = 1;

    cout << a;
    while (b <= n) {
        cout << ", " << b;
        int temp = b;
        b = a + b;
        a = temp;
    }

    cout << endl;

    return 0;
}