// ProEven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main()
{
    
    int a;

    
    cout << "a=?" << endl;
    cin >> a; 

    
    int a6 = (a / 10000) % 10; 
    int a4 = (a / 100) % 10; 
    int a2 = (a / 1) % 10; 
    int pro = a6 * a4 * a2;

    
    cout << pro << endl;

    return 0;
}