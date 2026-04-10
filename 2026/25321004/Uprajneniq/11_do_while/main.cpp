#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;

    cout << "Vuvedi n: ";
    cin >> n;

    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);

    cout << endl;

    cin.get();
    cin.get();
    return 0;
}
