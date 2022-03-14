#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    int d;
    cout << "Enter the amount of words: ";
    cin >> d;
    a = 0.2;
    b = 0.5;
    c = (d - 20) * 0.05;
    double price = a + b + c;
    cout << "Your price for the telegram is: " << price << endl;

    return 0;
}