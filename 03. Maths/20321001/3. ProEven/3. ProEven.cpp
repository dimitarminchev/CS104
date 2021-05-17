#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "number=?" << endl;
    cin >> number;

    int a2 = (number / 10000) % 10;
    int a4 = (number / 100) % 10;
    int a6 = (number / 1) % 10;

    int result = a2 * a4 * a6;

    cout << result << endl;

    return 0;
}
