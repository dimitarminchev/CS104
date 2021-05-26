#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;

    cout << "Enter sequence length: ";
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        float Ak = 1.0 / pow(k, 2);
        cout << Ak << endl;
    }

    return 0;
}
