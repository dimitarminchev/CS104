#include <iostream>

using namespace std;
int main()
{
    // Променлива за обема на цистерната
    int v;

    // Въвеждаме обема на цистерната
    cout << "v=";
    cin >> v;

    // Двете кофи и остатъка
    int total = v / (2 + 3);
    int remain = v % (2 + 3);

    // Информация за необходимия брой 
    cout << total << " times";
    switch (remain)
    {
        case 1: cout << " + 1 litre"; break;
        case 2: cout << " + 1 x 2 litres."; break;
        case 3: cout << " + 1 x 3 litres."; break;
        case 4: cout << " + 2 x 2 litres"; break;
    }
    return 0;
}
