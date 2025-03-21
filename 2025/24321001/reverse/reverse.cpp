#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int input;

    cout << "number = ";
    cin >> input;

    int a = (input / 100) % 10;
    int b = (input / 10) % 10;
    int c = (input / 1) % 10;

    cout << "reversed = ";
    cout << c << b << a;
}