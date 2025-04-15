// Redica An = 1/n
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n=";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << (1.0 / i) << endl;
    }

    return 0;
}
