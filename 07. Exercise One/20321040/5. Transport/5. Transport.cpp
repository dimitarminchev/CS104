#include <iostream>
using namespace std;
int main()
{
    // Променливи за брой хора в автобуси 1 и 2
    int a, b;

    // Въвеждаме броя хора в първите 2 автобуса
    cout << "bus1=?, bus2=?" << endl;
    cin >> a >> b;

    // Преразпределение на хората по автобуси
    int b3 = (a + b) / 3;
    int b1 = b3 - a;
    int b2 = b3 - b;

    // Извеждаме преразпределението
    cout << "b1: " << b1 << "  b2: " << b2 << " b3: " << b3 << endl;

    return 0;
}
