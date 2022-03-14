#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter upper limit of number sequence: ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        cout << i << ": ";

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) cout << j << ", ";
        }
        cout << endl;
    }
    return 0;
}