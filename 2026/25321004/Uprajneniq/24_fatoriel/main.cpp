#include <iostream>
using namespace std;

long long fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n;

    cout << "Vuvedi n: ";
    cin >> n;

    cout << "Faktorialut e: " << fact(n) << endl;

    cin.get();
    cin.get();
    return 0;
}




