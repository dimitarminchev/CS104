#include <iostream>

using namespace std;

int main()
{
    int input;

    cout << "a=";

    cin >> input;

    int a2 = (input / 10000) % 10;
    int a4 = (input / 100) % 10;
    int a6 = input % 10;

    int m = a2 * a4 * a6;

    cout << "Multiplication: " << m << endl;

    return 0;
}