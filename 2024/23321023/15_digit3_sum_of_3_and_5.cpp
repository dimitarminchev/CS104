#include <iostream>

using namespace std;

int main()
{
    unsigned int result = 0;
    for (unsigned long i = 100; i < 1000; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            result += i;
        }
    }

    cout << "Result is " << result << endl;
    
    return 0;
}