// 09. Произведение от цифрите на четните позиции на 6 цифрено цисло

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter six-digit number: " << endl;
    cin >> number;

    // Взимам четните позиции
    int d2 = (number / 10000) % 10;
    int d4 = (number / 100) % 10;
    int d6 = (number / 1) % 10;

    int result = d2 * d4 * d6;
    cout << "The result is: " << result << endl;
    return 0;
}