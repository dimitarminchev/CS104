// 02_sum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int a;
    int b;

    print("a=");
    cin >> a;
    print("b=");
    cin >> b;

    print("a+b=" << a + b);
    return 0;
}

