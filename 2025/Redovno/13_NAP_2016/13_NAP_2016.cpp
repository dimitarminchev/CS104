#include <iostream>
using namespace std;
int main()
{
    // Деклариране на промеливи за доход и данък
    float income, tax;

    // Въвеждане на дохода
    cout << "Please enter income for 2016: ";
    cin >> income;

    // Пресмятане на дължимия данък
    if (income <= 2160) tax = 0;
    else if (income < 3000) tax = (income - 2160) * 0.10;
    else if (income < 7200) tax = 162 + (income - 3000) * 0.20;
    else tax = 1072 + (income - 7200) * 0.22;

    // Извеждаме получения дължим данък
    cout << "Tax = " << tax << endl;

    return 0;
}
