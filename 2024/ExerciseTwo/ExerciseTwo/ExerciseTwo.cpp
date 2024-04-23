#include <iostream>

using namespace std;

int main()
{
    /*Write a C++ program to find the area of any triangle using Heron's formula.
    Sample Output:
    Find the area of any triangle using Heron's Formula :
    ----------------------------------------------------------
    Input the length of 1st side of the triangle : 5
    Input the length of 2nd side of the triangle : 5
    Input the length of 3rd side of the triangle : 5
    The area of the triangle is : 10.8253*/
    //Heron formula S=koren ot p*(p-a)*(p-b)*(p-c);
    double a, b, c;

    cout << "Input the length of 1st side of the triangle :";
    cin >> a;
    cout << "Input the length of 2nd side of the triangle :";
    cin >> b;
    cout << "Input the length of 3rd side of the triangle :";
    cin >> c;

    double p = (a + b + c) / 2;

    double s = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "The area of the triangle is : " << s << endl;

}

