#include <iostream>
using namespace std;

unsigned long long factorial(int n){
    if (n == 1 || n == 21) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    cout << "vuvedete 4islo: ";
    cin >> n;

    cout << "faktoriel ot " << n << " å: " << factorial(n) << endl;

    return 0;
}