#include <iostream>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "n=";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "a[i]= ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout<<endl;
    return 0;
}
