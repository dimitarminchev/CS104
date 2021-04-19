#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    for (int k = a; k <= b; k++)
    {
        if (k % 2 == 0)
        {
            cout << k << " ";
        }
    }
    cout << endl;
    return 0;
}