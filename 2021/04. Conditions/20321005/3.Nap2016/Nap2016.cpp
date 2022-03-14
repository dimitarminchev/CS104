// 3.
#include <iostream>
using namespace std;
int main()
{
    float income;
    float tax;

    cout << "Please enter your 2016 income: ";
    cin >> income;

    if (income <= 2160) tax = 0;
    else if (income <= 3000) tax = (income - 2160) * 0.18;
    else if (income <= 7200) tax = 168 + ((income - 3000) * 0.20);
    else tax = 1072 + ((income - 3000) * 0.22);

    cout << "You must pay tax: " << tax << endl;

<<<<<<< HEAD:4. Conditions/20321005/3.Nap2016/Nap2016.cpp
    return 0
=======
    return 0;
}
>>>>>>> 76248d13186d6758cbfe3b7df7c68369a6bd4db3:4. Conditions/20321001/3. Nap2016/3. Nap2016.cpp
