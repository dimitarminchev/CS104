#include<iostream>
using namespace std;
int main()
{

    int a;

    cin >> a; // 548792

    int a1 = (a / 1) % 10; // 2
    int a2 = (a / 10) % 10; // 9
    int a3 = (a / 100) % 10; // 7
    int a4 = (a / 1000) % 10; // 8
    int a5 = (a / 10000) % 10; // 4
    int a6 = (a / 100000) % 10; // 5

    int sumata = a5 * a4 * a1;

    cout << sumata << endl;

    return 0;
}