#include <iostream>
using namespace std;
int main()
{
    float inc,tax;
    cout << "Please enter your 2016 income: ";
    cin >> inc;
    if (inc <= 2160) tax = 0;
    else if (inc <= 3000) tax = (inc - 2160) * 0.18;
    else if (inc <= 7200) tax = 168 + ((inc - 3000) * 0.20);
    else tax = 1072 + ((inc - 7200) * 0.22);
    cout << "You must pay the tax of: " << tax << endl;
    return 0;
}