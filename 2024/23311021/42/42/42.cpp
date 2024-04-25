#include <iostream>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;

    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == s)
        {
            cout << i << endl;
        }
    }


    return 0;
}