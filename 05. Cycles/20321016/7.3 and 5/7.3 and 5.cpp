// 7.3 and 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int sum = 0;

    
    for (int i = 100; i <= 999; i++)
    {
        
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " ";
            sum = sum + i;
        }
    }

    
    cout << endl << sum << endl;
    return 0;
}