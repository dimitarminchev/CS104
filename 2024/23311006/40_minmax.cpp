#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int min = 1000, max = -1000;
    for(int i = 0; i < n;i++)
    {
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }
    cout << min << " " << max << endl;

    return 0;
}
