#include <iostream>
using namespace std;
int main()
{
    // Променливи 
    float a, b, c;
    int D1, D2, D3;

    
    // Въвеждане 
    cout << "Enter pool's dimensions : " << endl;
   
    cout << "a = ";
    cin >> a;
   
    cout << "b = ";
    cin >> b;
   
    cout << "c = ";
    cin >> c;

    cout << endl;

    
    // Въвеждане на куб. метри за час 
    cout << "Enter the cubic meters per hour: " << endl;

    cout << "D1 = ";
    cin >> D1;

    cout << "D2 = ";
    cin >> D2;

    cout << "D3 = ";
    cin >> D3;

    cout << endl;

    
    // Изчисления 
    double B = a * b * c;
    double D = D1 + D2 + D3;
    double T = B / D;
    cout << " The pool will be full in: " << T << " hours :) " << endl ;
    
   return 0;
}
