#include <iostream>
using namespace std;
int main()
{
    int n, fak, pro;

    cout << "n=";
    cin >> n;

    cout << "fak=";
    cin >> fak;

    cout << "pro=";
    cin >> pro;

    while (fak <= n)
    {
        pro = pro * fak;
        fak = fak + 1;
    }
    cout << n << "!=" << pro << endl;
    return 0;

}
