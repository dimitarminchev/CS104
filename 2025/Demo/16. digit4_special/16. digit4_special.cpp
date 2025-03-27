#include <iostream>
using namespace std;
int main()
{
    // Цикъл за четирицифрените числа
    for (int k = 1000; k <= 9999; k++)
    {
        int a = (k / 1000) % 10;
        int b = (k / 100) % 10;
        int c = (k / 10) % 10;
        int d = (k / 1) % 10;

        // Сума на хилядните и стотиците е равна на сума на десетици и единици
        if (a + b == c + d)
        {
            cout << k << " ";
        }
    }

    return 0;
}
