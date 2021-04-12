//  08. Сума от цифрите на нечетни позиции на 5 цифрено число

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter number :  " << endl;
    cin >> number;
  
    int a1 = (a / 10000) % 10;
    int a2 = (a / 1000) % 10;
    int a3 = (a / 100) % 10;
    int a4 = (a / 10) % 10;
    int a5 = (a / 1) % 10;

    int sum = a1 + a3 + a5;
    cout << "Result:  " << sum << endl;
    return 0;
}
