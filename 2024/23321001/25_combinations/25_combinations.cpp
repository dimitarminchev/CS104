// Комбинаторика
#include <iostream>
using namespace std;

long fak(int n)
{
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * fak(n - 1);
    }
}

int main()
{
    double FiveOf35 = fak(35) / (fak(5) * fak(35 - 5));
    double SixOf42 = fak(42) / (fak(6) * fak(42 - 6));
    double SixOf49 = fak(49) / (fak(6) * fak(49 - 6));

    cout << "5:35" << " = " << FiveOf35 << endl;
    cout << "6:42" << " = " << SixOf42 << endl;
    cout << "6:49" << " = " << SixOf49 << endl;

    return 0;
}
