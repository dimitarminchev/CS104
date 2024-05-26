// DR ZAD2 CHISLOTO
#include <iostream>
using namespace std;

int main() 
{
    int c;
    cin >> c;
    int c1 = c / 100;
    int c2 = (c % 100) / 10;
    int c3 = c % 10;
    int p = c1 * c2 * c3;
    cout << "Proizvedenie = " << p << endl;
    if (c % p == 0) 
    {
        cout << "Chisloto e kratno na cifrite si" << endl;
    }
    else 
    {
        cout << "Chisloto ne e kratno na cifrite si" << endl;
    }
    return 0;
}
