#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Please enter a b c values: " << endl;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;

    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    cout << "min= " << min << endl;
    cout << "max= " << max << endl;


    return 0;
}