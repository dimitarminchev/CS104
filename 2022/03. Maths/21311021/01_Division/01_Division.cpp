#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    int num;

    cin >> num;

    n3 = num % 10;
    num /= 10;
    n2 = num % 10;
    num /= 10;
    n1 = num % 10;

    cout << n1 << "\n" << n2 <<"\n" << n3;

    return 0;
}