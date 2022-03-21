#include <iostream>
using namespace std;
int main()
{
    for (int k = 1; k <= 100; k++)
    {
        if (k % 7 == 0 || // 1. Дали се дели на 7
            k % 10 == 7 || // 2. Дали цирата на единиците е 7
            (k / 10) % 10 == 7) // 3. Дали цифрата на десетиците е 7
        {
            cout << "Click ";
        }
        else 
        {
            cout << k << " ";
        }
    }
    return 0;
}
