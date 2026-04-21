#include <iostream>
using namespace std;

int main()
{
    int A;
    cout << "Enter 6-digit number: ";
    cin >> A;

    int A6 = A / 100000;
    int A5 = (A / 10000) % 10;
    int A4 = (A / 1000) % 10;
    int A3 = (A / 100) % 10;
    int A2 = (A / 10) % 10;
    int A1 = A % 10;

	int product = A2 * A4 * A6;

    cout << "Mult = " << product << endl;

    return 0;
}