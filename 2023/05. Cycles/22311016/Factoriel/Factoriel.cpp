#include <iostream>
using namespace std;
int main()
{
    int n, fak = 1, pro = 1;
    cout << "n = ";
    cin >> n;

    while (fak <= n)
    {
        pro = pro * fak;
        fak = fak + 1;
    }
    cout << n << "! = " << pro << endl;
    return 0;

}