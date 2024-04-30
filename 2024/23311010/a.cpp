#include<iostream>
using namespace std;

int main()
{
    int start, end;
    cin >> start >> end;

    for(int k = start; k <= end; k++)
    {
        if(k == 1) continue;
        bool isPrime = true;
        for( int j = 2; j < k; j++)
           if(k % j == 0)
           isPrime = false;
        if (isPrime) cout << k << " ";


    }
    cout << endl;
    return 0;
}