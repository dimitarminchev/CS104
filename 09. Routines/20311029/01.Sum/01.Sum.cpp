#include <iostream>

using namespace std;

int Sum(int a = 1, int b = 1)
{
    return (a + b);
}


int main()
{
    cout << Sum() << endl;

    cout << Sum(4, 4) << endl;

    return 0;
}