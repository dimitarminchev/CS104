#include <iostream>
using namespace std;
int main()
{
    // Сума на цифрите на 3 цифрено число
    int a;

    cin >> a;

    int a3 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a1 = (a / 1) % 10;

    cout << a1 + a2 + a3 << endl;

    return 0;
}
