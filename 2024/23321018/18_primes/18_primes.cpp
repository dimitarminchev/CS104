// The prime numbers up to a given number

#include <iostream>
using namespace std;

bool isPrime(int n) 
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int limit;
    cout << "Enter a number: ";
    cin >> limit;

    if (limit < 2) {
        cout << "There are no prime numbers up to " << limit << "." << endl;
    }
    else {
        cout << "Prime numbers up to " << limit << " are:" << endl;
        for (int i = 2; i <= limit; ++i) {
            if (isPrime(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
