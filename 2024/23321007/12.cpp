#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    for (unsigned int i = 0; i < 100; i++)
    {
        unsigned int a = (i / 10) % 10;
        unsigned int b = (i / 1) % 10;

        if ((i % 7 == 0) || (a == 7) || (b == 7))
        {
            cout << "click ";
        }
        else cout << i << " ";
    }

    return 0;
}