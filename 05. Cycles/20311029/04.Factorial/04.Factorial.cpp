#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Number: ";
    cin >> n;

    int result = 0, index = 1;

    if (n >= 0)
    {
        result = 1;

        for (int i = 1; i <= n; i++)
        {
            result *= i;
        }

        cout << n << "! = " << result << endl;
    }

    return 0;
}