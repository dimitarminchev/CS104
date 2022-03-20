// ProEven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main()
{
    // Декларираме целочислена променлива
    int a;

    // Въвеждаме стойност от клавиатурата
    cout << "a=?" << endl;
    cin >> a; // 123456

    // Отцепване на цифрите
    int a6 = (a / 100000) % 10; // 1
    int a4 = (a / 1000) % 10; // 3
    int a2 = (a / 10) % 10; // 5

    // Произведение на цифрите на четни позиции
    int pro = a6 * a4 * a2;

    // Отпечатваме резултата
    cout << pro << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
