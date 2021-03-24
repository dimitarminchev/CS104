// 09. Произведение от цифрите на четните позиции на 6 цифрено число

#include<iostream>
using namespace std;
int main()
{

    int number;
    cout << "Enter a number : " << endl;
    cin >> number;

    int a1 = (number / 100000) % 10;
    int a2 = (number / 10000) % 10;
    int a3 = (number / 1000) % 10;
    int a4 = (number / 100) % 10;
    int a5 = (number / 10) % 10;
    int a6 = (number / 1) % 10;

    int sum = a2 + a4 + a6;
    cout << "The result : " << sum << endl;
    return 0;
}