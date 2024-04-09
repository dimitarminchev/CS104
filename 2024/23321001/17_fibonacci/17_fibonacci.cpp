// 17. Фибоначи
#include <iostream>
#include <cmath>
using namespace std;
    int main()
    {
        int k;
        cout << "Въведи число: ";
        cin >> k;
        int a = 1, b = 1, c = a + b;

        cout << a << " " << b << " " << c << " ";
        
    while (c < k)
        {
                a = b;
                b = c;
                c = a + b;
            if (c < k)
                cout << c << " ";
        }


        return 0;
    }