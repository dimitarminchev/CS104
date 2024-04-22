#include<iostream>
using namespace std;

int main()

{
    //How much is the fish
    int n;
    cin >> n;

    //input number in the array
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //find min and max
    int min = 1000, max = -1000;
    for(int i = 0; i < n; i++)
    {
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }
    cout << min << endl;
    cout << max << endl;

    return 0;
}