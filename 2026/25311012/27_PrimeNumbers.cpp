#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    for (int k = 2; k <= n; k++)
    {
        bool prime = true;

        for (int i = 2; i < k; i++)
        {
            if (k % i == 0)
            {
                prime = false;
            }
        }

        if (prime)
        {
            cout << k << " ";
        }
    }
    cout << endl;
    return 0;
}
