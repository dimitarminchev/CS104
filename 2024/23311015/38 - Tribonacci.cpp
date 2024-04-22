#include <iostream>
using namespace std;
int main()
{   
    int n;
    cout << "Enter n: " << endl;
    cin >> n;

    int trib[100] = {0,1,1,2};
    for (int i = 4; i < n; i++)
    {
        trib[i] = trib[i-1] + trib[i-2] + trib[i-3];
    }

    for (int i = 0; i < n; i++)
    {
        cout << trib[i] << " ";
    }
    
    return 0;
}