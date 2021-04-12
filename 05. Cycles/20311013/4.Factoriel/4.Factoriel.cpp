#include <iostream>
using namespace std;
int main()
{
    int fak=1, index=1;
    const int n = 5;
    do
    {
        fak = fak * index;
        index++;
    } while (index <= n);
    cout << n << "!=" << fak << endl;
    return 0;
}