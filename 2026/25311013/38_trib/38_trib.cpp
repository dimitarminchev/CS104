#include <iostream>
using namespace std;
int main()
{
    const int N = 10; 


    int trib[N] = { 1,1,1 };

    
    for (int k = 3; k < N; k++)
    {
        trib[k] = trib[k - 3] + trib[k - 2] + trib[k - 1];
    }

    
    for (int k = 0; k < N; k++)
    {
        cout << trib[k] << " ";
    }
}