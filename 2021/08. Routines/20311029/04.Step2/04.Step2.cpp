#include <iostream>

using namespace std;

int Step2(int n)
{
    if (n <= 1) 
        return 2;
    else 
        return 2 * Step2(n - 1);
}

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "2^" << i << " = " << Step2(i) << endl;
    }

    return 0;
}