#include <iostream>
using namespace std;
int main()
{
    int a,a1,a2,a3;
    cout << "Enter a 3 digit number: ";
    cin >> a;
    a3 = (a / 100)%10;
    a2 = (a / 10) % 10;
    a1 = (a / 1) % 10;
    cout << a1 << a2 << a3;
    return 0;
}