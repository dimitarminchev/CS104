#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    int d;
    cout << "How many words do you want ?" << endl;
    cout << "words = ";
    cin >> d;     
    a = 0.20;
    b = 0.50;
    c = (d - 20) * 0.05;
    double price = a + b + c;
    cout << "price = " << price << "$" << endl;
    
    return 0;
}