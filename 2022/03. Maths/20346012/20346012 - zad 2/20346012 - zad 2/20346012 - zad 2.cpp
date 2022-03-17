#include<iostream>
using namespace std;
int main()
{

    int a;

    cin >> a; // 97831


    int a1 = (a / 1) % 10; // 1
    int a2 = (a / 10) % 10; // 3
    int a3 = (a / 100) % 10; // 8
    int a4 = (a / 1000) % 10; // 7
    int a5 = (a / 10000) % 10; // 9

    int sum = a1 + a2 + a4 + a5;

    cout << sum << endl;

    return 0;
}
