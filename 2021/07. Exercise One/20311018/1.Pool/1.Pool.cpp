#include <iostream>
using namespace std;
int main()
{
    double a, b, c;
    cout << "Enter the dimentions of the pool: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: " << endl;
    cin >> b;
    cout << "c: " << endl;
    cin >> c;
    int d1, d2, d3;
    cout << "d1(in cubic meters per hour): ";
    cin >> d1;
    cout << "d2(in cubic meters per hour): ";
    cin >> d2;
    cout << "d3(in cubic meters per hour): ";
    cin >> d3;

    double V = a * b * c;
    double D = d1 + d2 + d3;
    double Time = V / D;
    cout << "The pool will be full in " << Time << " hours.";

    return 0;
}