// Телеграма

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    // Променливи
    float a, b, c, words;


    // Въвеждане 
    cout << "Words = ";
    cin >> words;

    cout << "a = ";
    cin >> a;
    
    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;


    // Изчисления 
    float price = (words - 20) > 0 ? (a + b + (words - 20) * c) : a + b;


    // Отпечатване
    cout << "The price for your telegram is: " << price << endl;

    return 0;

}

