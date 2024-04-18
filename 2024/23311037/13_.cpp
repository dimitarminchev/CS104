#include<iostream>
using namespace std;
int main()
{
    float  income, tax = 0;

    //input

    cout << "Please enter income for 2016: ";
    cin >> income;

    //math
    if(income < 2160) tax= 0;
    else if(income < 3000) tax = (income - 2160) * 0.18;
    else if(income < 7200) tax = ()
    else tax = 1072 + (income - 7200) * 0.22;

}