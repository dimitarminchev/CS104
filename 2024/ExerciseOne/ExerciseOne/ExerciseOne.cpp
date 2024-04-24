#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main()
{
    int b;
    cout << "Input the number:" << endl;
    cin >> b;

    cout << "The numbers that can be divided to 5 and 3 between 1 and "<< b <<" are:" << endl;
    for (int i = 1; i <= b; i++)
    {
        if (i%5==0 && i%3==0)
        {
            cout << i << " ";
        }
    }
}
