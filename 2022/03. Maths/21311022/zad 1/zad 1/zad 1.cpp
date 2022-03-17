#include <iostream>
using namespace std;
int main()
{
    int chislo;
    cin >> chislo;
    int a1 = (chislo / 100) % 10;
    int a2 = (chislo / 10) % 10;
    int a3 = (chislo / 1) % 10;
    cout << a1 <<" "<< a2 << " " << a3 << endl;
    return 0;
}