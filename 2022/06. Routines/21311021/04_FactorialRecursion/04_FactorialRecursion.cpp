#include <iostream>
using namespace std;

int f(int n)
{
    if (n <= 1) 
        return 1;
    else 
        return n * f(n - 1);
}

int main()
{
    int num;
    cin >> num;

    cout << "Factorial of " <<num<<" is " << f(num) << endl;

    return 0;
}