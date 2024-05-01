//16. Отпечатайте четирицифренитe числа, за които сборът на цифрите на десетици и единици е равен на сбора цифрите на хилядни и стотици
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    for (int k = 1000; k <= 9999; k++)
    {
        int a = (k / 1000) % 10;
        int b = (k / 100) % 10;
        int c = (k / 10) % 10;
        int d = (k / 1) % 10;

        if ((a + b) == (c + d))
        {
            cout << k << " ";
        }
    }

    return 0;
}
