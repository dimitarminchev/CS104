//fatoriel
#include <iostream>
using namespace std;

unsigned long long factorial(int n);

int main()
{
    int num;
    cout << " ";
    cin >> num;

    unsigned long long result = factorial(num);

    cout << " " << num << "  " << result << endl;

    return 0;
}

unsigned long long factorial(int n)
{
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}