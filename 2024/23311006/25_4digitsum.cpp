#include<iostream>
using namespace std;
int main () 
{
    int sum = 0;
    for (size_t e = 1000; e <= 9999; e++)
    {
        int e4 = (e/1000) % 10;
        int e3 = (e/100) % 10;
        int e2 = (e/10) % 10;
        int e1 = (e/1) % 10;

        if((e1+e2)==(e3+e4))
        {
            cout << e << " ";
            sum = sum + e;
        }
    }
    cout << endl << "The sum of the numbers is: " << sum << endl;
    return 0;
}
