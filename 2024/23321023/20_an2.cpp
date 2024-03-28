#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n;
    cout << "Up to which numbers we want to print numbers, sir?" << endl;
    cin >> n;

    for (unsigned int i = 1; i <= n; i++)
    {
        cout << 1.0 / sqrt(i) << " ";
    }

    return 0;
}