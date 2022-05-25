// задача 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int V1, V2, T1, T2;
    cout << "V1=?, V2=?, T1=?, T2=? " << endl;
    cin >> V1 >> V2 >> T1 >> T2;

    double S = ((T1 * V1) + (T2 * V2))/ (T1+T2);
    cout << "S=" << S << endl;
  
    return 0;

}




