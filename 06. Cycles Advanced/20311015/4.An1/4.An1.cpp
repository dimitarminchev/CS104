#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter sequence length: ";
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        float Ak = 1.0 / k;
        cout << Ak << endl;
    }
    return 0;
}