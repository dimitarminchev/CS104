#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "a=?" << endl;
    cin >> a; // 12345

    int a1 = (a / 10000) % 10; // 1
    int a2 = (a / 1000) % 10; // 2
    int a3 = (a / 100) % 10; // 3
    int a4 = (a / 10) % 10; // 4
    int a5 = a % 10; //5

    int s = a1 + a3 + a5;

    cout << s << endl;

    return 0;
}