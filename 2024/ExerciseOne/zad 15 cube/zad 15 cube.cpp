#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double v ,a;
    cout << "Input the side of a cube : " << endl;
    cin >> a;
    v = pow(a, 3);
    cout << "The volume of a cube is :" << v << endl;
    return 0;
}
