#include <iostream>
using namespace std;
int main()
{
    int c1 = 2;
    int c2 = 5;
    int c5 = 7;
    int c10 = 12;
    int c20 = 3;
    int c50 = 6;
    int e1 = 2;
    int e2 = 1;

    int totalCents = 
    c1 * 1 +
    c2 * 2 +
    c5 * 5 +
    c10 * 10 +
    c20 * 20 +
    c50 * 50 +
    e1 * 100 +
    e2 * 200;

    float totalEuros = totalCents / 100.0;

    cout <<"Total money = " << totalEuros << " euros" << endl;

    return 0;
}

