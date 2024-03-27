// Сумата на естествените числа до зададено число
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum += i; // Добавяме текущото число към сумата
    }

    cout << "Sum of natural numbers to " << n << " е: " << sum << endl;

    return 0;
}
