#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    int n;
    cout << "How many numbers?" << endl;
    cin >> n;
    int a[100];
    cout << "Enter your numbers: " << endl;

    for (int i = 0; i < n; i++)
    {   
        cin >> a[i];
    }
    
    int min = 1000;
    int max = -1000;

    for (int i = 0; i < n; i++)
    {
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }

    cout << "Min number is: " << min << endl;
    cout << "Max number is: " << max << endl;

    return 0;
}