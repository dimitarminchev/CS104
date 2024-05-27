#include <iostream>
#include <limits>
using namespace std;

int main() {
    int numbers[5];
    int max_even = numeric_limits<int>::min();
    int min_odd = numeric_limits<int>::max();

    cout << "Въведете 5 цели числа, различни от нула:" << endl;
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
        
        if (numbers[i] % 2 == 0) {
            if (numbers[i] > max_even) {
                max_even = numbers[i];
            }
        } else {
            if (numbers[i] < min_odd) {
                min_odd = numbers[i];
            }
        }
    }

    if (max_even == numeric_limits<int>::min() || min_odd == numeric_limits<int>::max()) {
        cout << "Не може да бъде намерена разлика, тъй като няма подходящи четни или нечетни числа." << endl;
    } else {
        int difference = max_even - min_odd;
        cout << "Разликата между максималното четно число (" << max_even
             << ") и минималното нечетно число (" << min_odd << ") е: " << difference << endl;
    }

    return 0;
}
