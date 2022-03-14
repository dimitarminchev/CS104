#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "a=";
    cin >> a;

    cout << "b=";
    cin >> b;

    cout << "c=";
    cin >> c;

    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;

    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}