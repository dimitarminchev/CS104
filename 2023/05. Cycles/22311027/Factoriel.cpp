#include <iostream>

using namespace std;

int main()
{
    int n, fak, pro;

    cout << "n = ";
    cin >> n;

    cout << "fak = ";
    cin >> fak;

    cout << "pro = ";
    cin >> pro;

    while (fak <= n)
    {
        pro *= fak;
        fak++;
    }

    cout << n << "!=" << pro << endl;
    return 0;
}