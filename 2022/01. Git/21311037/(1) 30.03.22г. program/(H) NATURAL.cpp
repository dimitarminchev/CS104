#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; //21
    
    int sum = 0;

    for (int k = 10; k <= n; k++)
    {
        int k2 = (k / 10) % 10;
        int k1 = (k / 1) % 10;

        sum = sum + (k1 + k2);
    }

    cout << sum << endl;

    return 0;
}