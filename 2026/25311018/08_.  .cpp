#include <iostream>
using namespace std;

int main()
{
    int A;
    cout << "Enter 5-digit number: ";
    cin >> A;

    int A1 = A / 10000;        
    int A2 = (A / 1000) % 10;
    int A3 = (A / 100) % 10;
    int A4 = (A / 10) % 10;
    int A5 = A % 10;           

    int sum = A1 + A3 + A5;

    cout << "Sum = " << sum << endl;

    return 0;
}