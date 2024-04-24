#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "�������� ���� �� ������� �� ��������, ����� �� ����������: ";
    cin >> n;

    
    int a = 1, b = 1, c = a + b, d; 
    int fibonacci_sum = 0;
    int fibonacci_product = 1;
    cout << "������� �� ��������: ";
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

    
    cout << "���� �� ������� �� ������� �� ��������: " << fibonacci_sum << endl;
    cout << "������������ �� ������� �� ������� �� ��������: " << fibonacci_product << endl;

    return 0;
}