//17. Редицата на Фибоначи до зададено число
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a = 1, b = 1, c = a + b;
    cout << a << " " << b << " " << c << " ";
    while (c < n)
    {
        a = b;
        b = c;
        c = a + b;
        if (c < n)cout << c << " ";
    }

    return 0;
}
