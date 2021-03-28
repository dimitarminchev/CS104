#include <iostream>
using namespace std;
int main()
{
    int a, a2, a4, a6,um;
    cout << "Enter a 6 digit number: ";
    cin >> a;
    a6 = (a / 100000) % 10;
    a4 = (a / 1000) % 10;
    a2 = (a / 10) % 10;
    um = a6 * a4 * a2;
    cout << um<<endl;
    return 0;
}