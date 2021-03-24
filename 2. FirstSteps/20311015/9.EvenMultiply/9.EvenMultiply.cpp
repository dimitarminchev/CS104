#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a six-digit number: " << endl;
    cin >> a;
    int a1 = (a / 100000) % 10;
    int a2 = (a / 10000) % 10;
    int a3 = (a / 1000) % 10;
    int a4 = (a / 100) % 10;
    int a5 = (a / 10) % 10;
    int a6 = (a / 1) % 10;
    int sum = a2 * a4 * a6;
    cout << "Result:" << sum << endl;
    return 0;
}