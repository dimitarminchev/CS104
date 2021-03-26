
// 3. Дължим данък към НАП за 2016
#include <iostream>
using namespace std;
int main()
{
    // Променливи необходими за работата на програмата
    float income; // Доход получен през ходината
    float tax; // Дължим данък към НАП

    // Потребителя въвежда данни за дохода си
    cout << "Please enter your 2016 income: ";
    cin >> income;

    // Проверки
    if (income <= 2160) tax = 0;
    else if (income <= 3000) tax = (income - 2160) * 0.18;
    else if (income <= 7200) tax = 168 + ((income - 3000) * 0.20);
    else tax = 1072 + ((income - 7200) * 0.22);

    // Отпечатваме дължимия данък
    cout << "You must pay tax: " << tax << endl;

    return 0;
}