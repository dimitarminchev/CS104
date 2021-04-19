#include <iostream>
using namespace std;
int main()
{
    float t1, t2, v1, v2;

    cout << "v1=?, t1=?, v2=?, t2=?" << endl;
    cin >> v1 >> t1 >> v2 >> t2;

    double S = ((v1 * t1) + (v2 * t2)) / (t1 + t2);

    cout << "S=" << S << endl;

    return 0;
}
