#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "a=?" << endl;
    cin >> a; // 123456

    int a1 = (a / 100000) % 10; // 1
    int a2 = (a / 10000) % 10; // 2
    int a3 = (a / 1000) % 10; // 3
    int a4 = (a / 100) % 10; // 4
    int a5 = (a /10) % 10; //5
    int a6 = a % 10; //6

    int m = a2 * a4 * a6;

    cout << m << endl;

    return 0;
}