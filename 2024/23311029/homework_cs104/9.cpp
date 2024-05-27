#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int dni, meseci, godini;
    cin >> dni >> meseci >> godini;
    
    int luckynum = sumOfDigits(dni) + sumOfDigits(meseci) + sumOfDigits(godini);
    if (luckynum >= 10) {
            luckynum = sumOfDigits(luckynum);
        }
    cout << luckynum;
    return 0;
}
