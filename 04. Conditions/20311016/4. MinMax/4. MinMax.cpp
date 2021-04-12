#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    cout << "The smallest number is: " << min << endl;
    cout << "The largest number is: " << max << endl;

    return 0;
}
