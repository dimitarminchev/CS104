#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;

    cout << "Vuvedi n: ";
    cin >> n;

    while (i <= n)
    {
        cout << i << " ";
        i++;
    }

    cout << endl;

    cin.get();
    cin.get();
    return 0;
}
