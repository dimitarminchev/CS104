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
        float ak = pow((1.0 + (1.0 / k)), k);
        cout << ak << endl;
    }

    return 0;
}
