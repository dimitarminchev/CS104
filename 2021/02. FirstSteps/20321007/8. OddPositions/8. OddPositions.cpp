// 08. Сума от цифрите на нечетни позиции на 5 цифрено число

#include<iostream>
using namespace std;
int main()
{
    int number; 
    cout << "Enter five-digit number: "<< endl;
    cin >> number;
    
    // Взимам нечетни позиции
    int d1 = (number / 10000) % 10;
    int d3 = (number / 100) % 10;
    int d5 = (number / 1) % 10;

    int sum = d1 + d3 + d5;
    cout << "The sum is: " << sum << endl;
    return 0;
}