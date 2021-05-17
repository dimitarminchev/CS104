// 6.Sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    
    int n, sum = 0;

    
    cout << "n=";
    cin >> n;

    
    for (int i = 1; i <= n; i++)
    {
        
        sum = sum + i;
    }

    
    cout << "sum=" << sum << " ";

    return 0;
}