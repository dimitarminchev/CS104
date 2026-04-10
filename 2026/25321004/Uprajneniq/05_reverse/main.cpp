#include <iostream>
using namespace std;

int main()
{
    int n;
    int a, b, c;
    int reversed;

    cout << "Vuvedi tricifreno chislo: ";
    cin >> n;

    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;

    reversed = c * 100 + b * 10 + a;

    cout << "Oburnatoto chislo e: " << reversed << endl;

    cin.get();
    cin.get();
    return 0;
}
