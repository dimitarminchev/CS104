#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    double income, tax = 0;

    print("Please enter income for 2016");
    cin >> income;

    if (income < 2160) tax = 0;
    else if (income < 3000) tax = (income - 2160) * 0.18;
    else if (income < 7200) tax = 168 + (income - 3000) * 0.2;
    else if (income > 7200) tax = 1072 + (income - 7200) * 0.22;

    print("Your tax is: " << tax)
    return 0;
}

