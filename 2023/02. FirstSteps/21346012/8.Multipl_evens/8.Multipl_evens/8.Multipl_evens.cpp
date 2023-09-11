#include <iostream>
using namespace std;
int main()
{
    int N, num2, num4, num6, total;
    cout << "Number = ?" << endl;
    cin >> N;
    num2 = (N / 10000) % 10;
    num4 = (N / 100) % 10;
    num6 = (N / 1) % 10;
    total = num2 * num4 * num6;
    cout << "Multiplication of evens is " << total << endl;
    return 0;
}