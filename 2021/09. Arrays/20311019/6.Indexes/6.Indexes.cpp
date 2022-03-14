#include <iostream>
using namespace std;
int main()
{
    int n, p, A[1000];

    cout << "n=";
    cin >> n;
    cout << "p=";
    cin >> p;

    for (int i = 0; i < n; i++) cin >> A[i];

    cout << "Indexes: ";
    for (int i = 0; i < n; i++)
    {
        if (A[i] == p)
        {
            cout << i << " ";
        }
    }

    return 0;
}