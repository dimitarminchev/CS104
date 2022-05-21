// 4. Fak
#include <iostream>
using namespace std;
// Рекурсивна функция за намиране на Факториел
// n= Търсен фекториел
// returns = Резултат
int fak(int n)
{
    if (n <= 1) return 1; // exit 
    else return n * fak(n - 1);
}

int main()
{
    cout << "5!=" << fak(5) << endl;
    return 0;
}