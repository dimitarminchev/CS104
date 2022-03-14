#include <iostream>

using namespace std;

int Fak(int x)
{
    if (x <= 1)
        return 1;
    else
        return x * Fak(x - 1);
}

int main()
{
    int x;

    cout << "x = ";
    cin >> x;

    cout << x << "! = " << Fak(x) << endl;
    return 0;
}