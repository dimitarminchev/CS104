#include <iostream>

using namespace std;

int main()
{
    int input;

    cout << "a=";
    cin >> input;

    int a1 = (input / 100) % 10;
    int a2 = (input / 10) % 10;
    int a3 = input % 10;

    cout << a3 << a2 << a1 << endl;

    return 0;
}