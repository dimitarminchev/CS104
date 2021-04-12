#include <iostream>

using namespace std;

int main()
{
    int input;

    cout << "a=";

    cin >> input;

    int a1 = (input / 1000) % 10;
    int a2 = (input / 100) % 10;
    int a3 = (input / 10) % 10;
    int a4 = input % 10;

    int s = a1 + a2 + a3 + a4;
    int m = a1 * a2 * a3 * a4;

    cout << "Sum: " << s << endl;
    cout << "Multiplication: " << m << endl;

    return 0;
}