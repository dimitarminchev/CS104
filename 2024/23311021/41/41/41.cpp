#include <iostream>
using namespace std;
int main()
{
    int n,x;
    int count = 0;
    cin >> n >>x;

    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i]==x)
        {
            count++;
        }
    }
    cout << x<< " repeats "<<count <<" times \n";

    return 0;
}