// 05. Обръщане на трицифрено число
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter number for reversal " << endl;
    cin >> a;
    int a1 = (a / 100) % 10;
    int a2 = (a / 10) % 10;
    int a3 = (a / 1) % 10;
    cout << "reversed number";
    cout << a3 << a2 << a1 << endl;

    return 0;
}