// Числата от редицата на Фибоначи
#include <iostream>
using namespace std;

int fibonacci(int n) 
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    cout << "Въведете броя на числата от редицата на Фибоначи: ";
    cin >> n;

    cout << "Първите " << n << " числа от редицата на Фибоначи са:\n";

    for (int i = 0; i < n; ++i) 
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
