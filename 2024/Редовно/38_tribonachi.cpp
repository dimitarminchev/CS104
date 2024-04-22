#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // find the numbers in the tribunacci sequance
    int trib[100] = {0,1,1,2};

    for(int i = 4;i<n;i++)
    {
       trib[i] = trib[i-3] + trib[i-2] + trib[i-1];
    }

    // print them all
    for(int a = 0;a<n;a++)
    {
        cout << trib[a] << " ";
    }

    return 0;
}