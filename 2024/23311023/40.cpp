#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    int min = 1000;
    int max = -1000;

    int a[100];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    


    for(int i = 0;i < n; i++)
    {
        if(a[i] < min) min = a[i];
        if(a[i] > max) max = a[i];
    }


    cout << min << endl;
    cout << max << endl; 
    return 0;

}