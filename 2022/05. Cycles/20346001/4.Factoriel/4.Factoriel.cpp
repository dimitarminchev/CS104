// 4. Factoriel
#include <iostream>
using namespace std;
int main()
{
    // Горна граница
    const int n = 5;

    int fak = 1, index = 1;

    //цикъл
    do
    {
        fak = fak * index;
        index = index + 1;
    } while (index <= n);

    cout << n << "!=" << fak << endl;
    return 0;
}