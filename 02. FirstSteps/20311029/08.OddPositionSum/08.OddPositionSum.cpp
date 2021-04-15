#include <iostream>

using namespace std;

int main()
{
    int input;

    cout << "a=";

    cin >> input;

    int a1 = (input / 10000) % 10;
    int a3 = (input / 100) % 10;
    int a5 = input % 10;

    int s = a1 + a3 + a5;

    cout << "Sum: " << s << endl;

    return 0;
}