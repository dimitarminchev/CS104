// 1. Summing
#include <iostream>
using namespace std;
// function sum - a, b, returns
int sum(int a = 2, int b = 3)
{
    return (a + b);
}

int main()
{
    // function sum
    cout << sum() << endl;
    cout << sum(1) << endl;
    cout << sum(1, 2) << endl;
    return 0;
}