#include <iostream>
using namespace std;
int main()
{
    int a, a1, a3, a5, sum;
    cout << "Enter a 5 digit number: ";
    cin >> a;
    a5 = (a / 10000) % 10;
    a3 = (a / 100) % 10;
    a1 = (a / 1) % 10;
    sum = a1 + a3 + a5;
    cout << sum << endl;
    return 0;
}