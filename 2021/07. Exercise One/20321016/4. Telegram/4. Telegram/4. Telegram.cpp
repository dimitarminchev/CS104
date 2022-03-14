// 4. Telegram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    float words, a, b, c;

    cout << "words=?, a=?, b=?, c=?" << endl;
    cin >> words >> a >> b >> c;
    float total = (words - 20) > 0 ? (a + b + ((words - 20) * c)) : (a + b);
    cout << "total=" << total << endl;

    return 0;
}