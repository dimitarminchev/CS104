#include <iostream>
using namespace std;

int power2(int n)
{
    if (n == 0)
        return 1;
    else
        return 2 * power2(n - 1);
}

int main()
{
    int n;

    cout << "Vuvedi n: ";
    cin >> n;

    cout << "2 na stepen " << n << " = " << power2(n) << endl;

    cin.get();
    cin.get();
    return 0;
}

