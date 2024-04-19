#include <iostream>
using namespace std;

int main() 
{
    int sum = 0;

    for (int i = 100; i < 1000; i++) 
    {
        if (i % 3 == 0 && i % 5 == 0) 
        {
            sum += i;
        }
    }

    cout << "Sum= " << sum << endl;

    return 0;
}
