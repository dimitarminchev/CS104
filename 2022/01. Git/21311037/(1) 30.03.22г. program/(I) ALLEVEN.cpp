#include <iostream>
using namespace std;
int main()
{
    int start, finish;
    cin >> start >> finish;

    for (int k = start; k <= finish; k++)
    {
        if (k % 2 == 0)
        {
            cout << k << " ";
        }
    }
    cout << endl;

    return 0;
}