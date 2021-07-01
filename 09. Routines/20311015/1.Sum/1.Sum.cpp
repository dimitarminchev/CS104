#include <iostream>
using namespace std;

int sum(int a = 0, int b = 0)
{
    return (a + b);
}

int main()
{
    int a, b;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "a + b = " << sum(a, b) << endl;

    return 0;
}