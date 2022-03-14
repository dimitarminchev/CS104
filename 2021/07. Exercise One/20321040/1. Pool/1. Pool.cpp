#include <iostream>
using namespace std;
int main()
{
    int x, y, z;

    int d1, d2, d3;

    cout << "x=?, y=?, z=?" << endl;
    cin >> x >> y >> z;
    cout << "d1=?, d2=?, d3=?" << endl;
    cin >> d1 >> d2 >> d3;

    double h = (x * y * z) / (d1 + d2 + d3);

    cout << "h=" << h << endl;

    return 0;
}
