#include <iostream>
using namespace std;
// Рекурсивна фунцкия за намиране на факториел
int fak(int n)
{
    if (n == 1) return 1;
    else return n * fak(n - 1);
}
// Главна функция
int main()
{
    cout << "5!=" << fak(5) << endl;
    return 0;
}
