#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Въведете броя на числата на Фибоначи, които да генерирате: ";
    cin >> n;

    
    int a = 1, b = 1, c = a + b, d; 
    int fibonacci_sum = 0;
    int fibonacci_product = 1;
    cout << "Числата на Фибоначи: ";
    cout << a << " " << b << " " << c << " ";
    while (c < n)
    {
        a = b;
        b = c;
        c = a + b;
        if (c < n) {
            cout << c << " ";
            
            int temp = c;
            int sum = 0;
            int product = 1;
            while (temp > 0) {
                int digit = temp % 10;
                sum += digit;
                product *= digit;
                temp /= 10;
            }
            
            fibonacci_sum += sum;
            fibonacci_product *= product;
        }
    }
    cout << endl;

    
    cout << "Сума на цифрите на числата на Фибоначи: " << fibonacci_sum << endl;
    cout << "Произведение на цифрите на числата на Фибоначи: " << fibonacci_product << endl;

    return 0;
}