#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    float ak;

    cout << "Upper Limit: ";
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        ak = 1.0 / pow(k, 2);
        cout << ak << endl;
    }

    return 0;
}
