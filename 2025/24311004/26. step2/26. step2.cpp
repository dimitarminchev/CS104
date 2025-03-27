#include <iostream>
using namespace std;

int stepOfTwo(int power) {
    if (power == 1) return 2;
    return 2 * stepOfTwo(power - 1);
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;

    cout << stepOfTwo(n);
}