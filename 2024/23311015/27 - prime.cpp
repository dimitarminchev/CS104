#include<iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter max number: " << endl;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0) isPrime = false;
        }
        if (isPrime) cout << i << " ";
    }
    return 0;
}
