#include <iostream>

using namespace std;

int main()
{
    int n;
    float ak;

    cout << "Upper Limit: ";
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        ak = 1.0 / k;
        cout << ak << endl;
    }

    return 0;
}
