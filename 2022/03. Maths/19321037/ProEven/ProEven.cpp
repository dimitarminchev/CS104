#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a six digit number: ";
    cin >> a;
    int a6 = (a / 100000) % 10;
    int a4 = (a / 1000) % 10;
    int a2 = (a / 10) % 10;
    int pro = a6 * a4 * a2;
    cout << "Result: " << pro << endl;
    return 0;
}