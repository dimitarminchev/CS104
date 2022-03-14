#include <iostream>
#include <cmath>

using namespace std;

int MyFunction(int x = 1, int y = 1)
{
    int sum = 0;

    for (int k = 1; k <= y; k++)
    {
        sum += pow(-x, k);
    }

    return sum;
}

int main()
{
    int x, y;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    cout << "f = " << MyFunction(x, y) << endl;
    return 0;
}