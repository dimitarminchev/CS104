#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        int first = i / 100;
        int second = i % 100;

        if (first * first == second)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
