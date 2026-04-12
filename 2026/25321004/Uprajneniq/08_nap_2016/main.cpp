#include <iostream>
using namespace std;

int main()
{
    double income, tax;

    cout << "Vuvedi godishen dohod: ";
    cin >> income;

    if (income <= 7200)
    {
        tax = 0;
    }
    else
    {
        tax = (income - 7200) * 0.10;
    }

    cout << "Duljim danuk: " << tax << endl;

    cin.get();
    cin.get();
    return 0;
}
