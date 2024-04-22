#include <iostream>
using namespace std;
int main()
{
    // How much numbers we have
    int n;
    cin >> n;

    // Input number in the array
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    // Find min and max
    int min = 1000, max = -1000;
    for(int i = 0; i < n;i++)
    {
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }
    cout << min << " " << max << endl;

    return 0;
}