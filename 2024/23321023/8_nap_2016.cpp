#include <iostream>

using namespace std;

int main()
{
    unsigned int income;
    unsigned int tax;

    cout << "Sir, what is you income?" << endl;
    cin >> income;

    if (income <= 2160) {
        tax = 0;
    } else if (income > 2160 && income <= 3000) {
        tax = (income - 2160) * 0.18;
    } else if (income > 3000 && income <= 7200) {
        tax = 168 + (income - 2160) * 0.20;
    } else {
        tax = 1072 + (income - 2160) * 0.22;
    }

    cout << "Your tax is " << tax << endl;

    return 0;
}
