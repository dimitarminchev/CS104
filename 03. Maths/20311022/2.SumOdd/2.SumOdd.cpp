
// Упражнение 2 - отцепване + събиране
#include <iostream>
using namespace std;
int main()
{
    а
        int a;

    cout << "a=?" << endl;
    cin >> a;

    int a1 = (a / 10000) % 10; // 1
    int a3 = (a / 100) % 10; // 3
    int a5 = (a / 1) % 10; // 5
    int sum = a1 + a3 + a5;

    cout << sum << endl;

    return 0;
}