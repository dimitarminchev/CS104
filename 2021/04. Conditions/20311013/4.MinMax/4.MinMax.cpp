#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "a=?, b=?, c=?" << endl;
    cin >> a>>b>>c;
    int min = a, max = a;
    if (min > b) min = b;
    if (min > c) min = c;
    if (max < b) max = b;
    if (max < c) max = c;
    cout << "min = " << min << endl << "max = " << max << endl;
    return 0;
}