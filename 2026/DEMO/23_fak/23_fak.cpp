#include <iostream>
using namespace std;
int main()
{
    int n, fak = 1;
    cout << "n=";
    cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        fak = fak * i;
    }
    cout << "n!=" << fak << endl;
    return 0;
}