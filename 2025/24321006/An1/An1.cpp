#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n=";
    cin >> n;


    for (int k = 1; k <= n;k++)
    {
        double Ak = 1.0 / k;
        cout << Ak << endl;
    }

    return 0;
}