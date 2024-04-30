#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int tri[20] = {1,1,1};

    for (int i = 3; i < 20; i++)
    tri[i] = tri[i-3] + tri[i-2] + tri[i-1];

    for (int i = 0; i < 20; i++)
    {
        if(tri[i] >= n) break;
        cout << tri[i] << " ";
    }
    cout << endl;
    return 0;
}