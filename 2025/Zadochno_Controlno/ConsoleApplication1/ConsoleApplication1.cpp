#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;

    int a = (x / 1000) % 10;
    int b = (x / 100) % 10;
    int c = (x / 10) % 10;
    int d = (x / 1) % 10;

    cout << a + b + c + d << " " << a * b * c * d << endl;
    return 0;
}
