#include <iostream>
using namespace std;

int main()
{
    int a, b;
   
    
    cout << "Enter A side of the rectangle: " << endl;
    cin >> a;

    cout << "Enter B side of the rectangle: " << endl;
    cin >> b;

    int c = (a + b) * 2;
    int d = a * b;

    cout << "The perimeter of the rectangle is :" << endl;
    cout << c << endl;

    cout << "The face of the rectangle is :" << endl;
    cout << d << endl;

    return 0;
}