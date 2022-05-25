#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; //100

    for (int k = 1; k <= n; k++)
    {
        if (k % 15 == 0) // :3 :5
        {
            cout << k << " ";
        }
    }
    cout << endl;

    return 0;
}