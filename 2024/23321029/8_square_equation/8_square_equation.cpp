// 8_nap 2016.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 


#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float income = 0, tax = 0;
    cout << "Enter income for 2015: ";
    cin >> income;

    
    
    if (income <= 2160) tax = 0;
    else if (income <= 3000) tax = (income - 2160) * 0.18;
    else if (income <= 7200) tax = 168 + (income - 3000) * 0.20;
    else  tax = 1072 + (income - 7200) * 0.22;
    
     cout <<  "Tax = " << tax <<endl;
   
    

    return 0;
}



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
