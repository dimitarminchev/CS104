#include <iostream>
#include <cmath>
using namespace std;

int factoriel(int number) {
    if (number == 1)
    {
        return 1;
    }
    return number * factoriel(number - 1);
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;
     
    cout << factoriel(n);
}