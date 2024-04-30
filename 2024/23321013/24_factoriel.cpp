//24.
#include <iostream>
using namespace std;

unsigned long long factorial(int n);

int main()
 {
    int num;
    cout << "Въведете число: ";
    cin >> num;

    unsigned long long result = factorial(num);

    cout << "Факториел на " << num << " е " << result << endl;

    return 0;
}

unsigned long long factorial(int n)
 {
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}
