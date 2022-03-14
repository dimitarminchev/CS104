#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b,c;
    float D, x1, x2;
    cout << "a=?, b=?, c=?"<<endl;
    cin >> a >> b >> c;
    D = pow(b, 2) - 4 * a * c;
    x1 = ((-b) - sqrt(D)) / (2 * a);
    x2 = ((-b) + sqrt(D)) / (2 * a);
    cout << "D= " << D << endl << "x1= " << x1 << endl << "x2= " << x2 << endl;
    return 0;
}