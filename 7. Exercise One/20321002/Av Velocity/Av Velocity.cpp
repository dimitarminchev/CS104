#include <iostream>
using namespace std;
int main()
{
    float t1, t2, V1, V2;
    cout << "V1=?, t1=?, V2=?, t2=?" << endl;
    cin >> V1 >> t1 >> V2 >> t2;
    double S = ((V1 * t1) + (V2 * t2)) / (t1 + t2);
    cout << "S=" << S << endl;

    return 0;
}
