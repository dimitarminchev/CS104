#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    int x, n;
    cout << "Enter x, n: " << endl;
    cin >> x >> n;

    int sum = 0;
    int k[100] = {0,0,0};
    for (int i = 0; i < n; i++)
    {
        k[i] = pow(x, i + 1);
        sum = sum + k[i];
    }
    cout << sum << " ";
    return 0;
}