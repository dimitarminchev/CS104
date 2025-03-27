#include <iostream>
using namespace std;

bool isPrime(int number) {
    for (int i = 2; i <= number/2; i++)
    {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    
    int n;
    cout << "n=";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}