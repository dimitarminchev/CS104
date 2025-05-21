#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;


    double tri[1000] = { 1,1,1 };

    for (int k = 3; k < n; k++)
    {
        tri[k] = tri[k - 1] + tri[k - 2] + tri[k - 3];
        
    }

    for (int k = 0; k < n; k++)
        if(tri[k] < n)
        cout << tri[k] << " ";

    cout << endl;
    return 0;
}