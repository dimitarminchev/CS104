#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    int n, x;
    cout << "Enter how many numbers: " << endl;
    cin >> n;
    cout << "Enter the number you are looking for: " << endl;
    cin >> x;
    int a[100];
    cout << "Enter your numbers: " << endl;

    for (int i = 0; i < n; i++)
    {   
        cin >> a[i];
        if(a[i] == x) cout << "Position " << i << " ";
    }

    return 0;
}